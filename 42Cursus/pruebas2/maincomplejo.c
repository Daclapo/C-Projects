#include "get_next_line.h"
#include <fcntl.h> // Para open
#include <stdio.h> // Para printf
#include <stdlib.h> // Para exit

void test_single_read(int fd)
{
    char *line = get_next_line(fd);
    if (line)
    {
        printf("Single read result: %s", line);
        free(line);
    }
    else
    {
        printf("Single read result: NULL\n");
    }
}

void test_loop_read(int fd)
{
    char *line;
    int line_count = 0;

    printf("Reading lines in a loop:\n");
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line %d: %s", ++line_count, line);
        free(line);
    }
    printf("End of file or error reached.\n");
}

int main(int argc, char **argv)
{
    int fd;

    if (argc != 2)
    {
        write(2, "Usage: ./gnl <file_path>\n", 25);
        return (1);
    }

    // Abrir el archivo
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    // Test: Single read
    printf("=== Test: Single Read ===\n");
    test_single_read(fd);

    // Reset fd con close y reopen
    close(fd);
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error reopening file");
        return (1);
    }

    // Test: Loop read
    printf("\n=== Test: Loop Read ===\n");
    test_loop_read(fd);

    // Cerrar el archivo
    if (close(fd) < 0)
    {
        perror("Error closing file");
        return (1);
    }

    return (0);
}
