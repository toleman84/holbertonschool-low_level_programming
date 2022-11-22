#include "main.h"

/**
 * __exit - Print error messages
 * @error: numbers of errors.
 * @s: is a name of files.
 * @file: file descriptor.
 *
 * Return: 0 (Success)
 */

int __exit(int error, char *s, int file)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(error);
		default:
			return (0);
	}

}


/**
 * main - Program that copies one file to another file.
 * @argc: (./a copy_from_file copy_to_file)
 * @argv: file copy from, file copy to.
 *
 * Return: 0 (success), 97, 98, 99, 100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int file_1, file_2, _read, _write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

/*sets file descriptor copy to file*/
	file_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_2 == -1)
		__exit(99, argv[2], 0);

/*sets file descriptor copy from file*/
	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
		__exit(98, argv[1], 0);

/*reads orginal file if long are more than 0 to read*/
/*copies/writes content int new file*/
	while ((_read = read(file_1, buffer, 1024)) != 0)
	{
		if (_read == -1)
			__exit(98, argv[1], 0);

		_write = write(file_2, buffer, _read);
		if (_write == -1)
			__exit(99, argv[2], 0);
	}

	close(file_2) == -1 ? (__exit(100, NULL, file_2)) : close(file_2);
	close(file_1) == -1 ? (__exit(100, NULL, file_1)) : close(file_1);

	return (0);
}

