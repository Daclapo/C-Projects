#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
    int     fd;
    char    *line;

    if (argc != 2)
    {
        write(2, "fichero compilado, seguido de la ruta del fichero a leer", 56);
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    if (close(fd) < 0)
    {
        perror("Error closing file");
        return (1);
    }

    return (0);
}
