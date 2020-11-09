#include "holberton.h"
/**
 *read_textfile - read_textfile
 *@filename: char
 *@letters: size
 *Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int sz;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sz = read(fd, buf, letters);
	if (sz == -1)
		return (0);
	write(1, buf, sz);
	close(fd);
	free(buf);
	return (sz);
}
