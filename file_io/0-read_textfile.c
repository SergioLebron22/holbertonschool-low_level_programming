#include "main.h"
#include <fcntl.h>

/**
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    int len, written;
    char *buffer;

    if (filename == NULL || letters == 0)
        return (0);

    buffer = malloc(sizeof(char) * (letters));

    if (buffer == NULL)
        return (0);
    
    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        free(buffer);
        return (0);
    }
    len = read(file, buffer, letters);
    if (len == -1)
    {
        free(buffer);
        close(file);
        return (0);
    }

    written = write(STDOUT_FILENO, buffer, len);
    
    free(buffer);
    close(file);

    if (written != len)
    {
        return (0);
    }
    return (len);
}
