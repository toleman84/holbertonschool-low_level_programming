#include "main.h"

/**
 * read_textfile - Short description.
 * @filename: first member.
 * @letters: second member.
 *
 * Return: read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read, write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read = read(fd, buffer, letters);
	if (read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write = write(STDOUT_FILENO, buffer, n_read);
	if (write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (read);
}

