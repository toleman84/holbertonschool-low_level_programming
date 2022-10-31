#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Short description.
 * @separator: fisrt member.
 * @n: second member.
 *
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int numbers;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	numbers = va_arg(ap, const unsigned int);
	printf("%d", numbers);
	if (separator == NULL)
	{
		continue;
	}
	if (i < n - 1)
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ap);
}

