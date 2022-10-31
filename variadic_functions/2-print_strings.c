#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Short description.
 * @separator: first member.
 * @n: second member.
 *
 * Retur: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strings;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(ap, char *);
		printf("%s", strings);

		if (strings == NULL)
		{
			printf("(nil)");
		}
		if (separator == NULL)
		{
			continue;
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

