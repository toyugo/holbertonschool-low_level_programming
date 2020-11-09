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
	int w;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	printf("%lu\n", letters);
	if (fd == -1)
	{
		printf("FAIL\n");
		return (0);
	}
	sz = read(fd, buf, letters);
	w = write(1, buf, sz);
	close(fd);
	free(buf);
	return (sz);
}
