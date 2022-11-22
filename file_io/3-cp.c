#include "main.h"

/**
 * __exit - Print error messages
 * @error: numbers of errors.
 *
 * Return: 0 (Success)
 */

int __exit(int error)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Can't write to NAME_OF_THE_FILE\n");
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Can't close fd FD_VALUE\n");
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
	int file1, file2, _read, _write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97);

/*sets file descript    or copy to file*/
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file2 == -1)
		__exit(99);

/*sets file descriptor copy from file*/
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		__exit(98);

/*reads orginal file if long are more than 0 to read*/
/*copies/writes content int new file*/
	while ((_read = read(file1, buffer, 1024)) != 0)
	{
		if (_read == -1)
			__exit(98);

		_write = write(file2, buffer, _read);
		if (_write == -1)
			__exit(99);
	}

	if (file2 == -1)
	{
		__exit(100);
		close(file2);
	}
	if (file1 == -1)
	{
		__exit(100);
		close(file1);
	}

	return (0);
}

