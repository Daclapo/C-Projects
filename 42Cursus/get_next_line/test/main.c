#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

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

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    printf("=== Test: Single Read ===\n");
    test_single_read(fd);

    close(fd);
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error reopening file");
        return (1);
    }

    printf("\n=== Test: Loop Read ===\n");
    test_loop_read(fd);

    if (close(fd) < 0)
    {
        perror("Error closing file");
        return (1);
    }

    return (0);
}

/* COMPILATION
cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line.c get_next_line_utils.c main.c -o gnl
./gnl test_normal.txt
---
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
./gnl test_large.txt
---
cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 get_next_line.c get_next_line_utils.c main.c -o gnl
./gnl test_special_chars.txt
 */

