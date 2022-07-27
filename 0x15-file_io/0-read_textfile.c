#include "main.h"
#include <stddef.h>

/**
 * read_textfile - Reads from file and prints out
 *
 * @filename: File name
 * @letters: No of letters read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, noRead, noWrite;
char *buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
if (filename == NULL)
{
free(buf);
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
free(buf);
return (0);
}
noRead = read(fd, buf, letters);
if (noRead < 0)
{
free(buf);
return (0);
}
noWrite = write(0, buf, noRead);
if (noWrite < 0 || noWrite != noRead)
{
free(buf);
return (0);
}
free(buf);
return (noWrite);
}
