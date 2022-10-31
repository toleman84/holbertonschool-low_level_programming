#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Short decription.
 * @argc: first member.
 * @argv: second member.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	f = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}

