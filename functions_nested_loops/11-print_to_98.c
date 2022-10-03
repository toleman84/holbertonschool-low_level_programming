#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Short description
 *
 * Return: 0 (Success)
 * @n: Variable
 */

void print_to_98(int n)
{

if (n <= 98)
{
for (; n <= 98; n++)
	{
	if (n <= 98)
	{
		printf("%d", n);
		printf(", ");}
	else if (n == 98)
	{
		printf("%d", n);
	}
	}
printf("\n");
}
else
{
for (; n >= 98; n--)
	{
	if (n >= 98)
	{
		printf("%d", n);
		printf(", ");
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	}

printf("\n");
}

}

