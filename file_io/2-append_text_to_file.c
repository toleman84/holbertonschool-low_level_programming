#include "main.h"

/**
 * append_text_to_file - Short description.
 * @filename: first member.
 * @text_content: second member.
 *
 * Return: Always.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, len = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_APPEND);
	if (fdopen < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdopen);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdwrite = write(fdopen, text_content, len);
	close(fdopen);
	if (fdwrite < 0)
		return (-1);

	return (1);
}

