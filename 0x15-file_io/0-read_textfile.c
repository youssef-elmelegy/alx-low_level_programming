#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	count = read(fd, buf, letters);
	count = write(STDOUT_FILENO, buf, count);

	free(buf);
	close(fd);
	return (count);
}
