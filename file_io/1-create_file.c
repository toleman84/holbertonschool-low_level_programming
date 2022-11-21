#include "main.h"

/**
 * create_file - Short description.
 * @filename: first member.
 * @text_content: second member.
 *
 * Return: Always.
 */

int create_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, len = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdopen < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdwrite = write(fdopen, text_content, len);
	close(fdopen);
	if (fdwrite < 0)
		return (-1);

	return (1);
}

