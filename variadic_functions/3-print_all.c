#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Short description.
 * @format: first member.
 *
 * Return: Always 0 (success)
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	char *sep;
	int i = 0;
	int j = 0;

	sep = ", ";
	va_start(ap, format);

	while (format && format[j])
		j++;
	while (format && format[i])
	{
		if (i == j - 1)
			sep = "";
		switch (format[i])
		{
			case ('c'):
				printf("%c%s", va_arg(ap, int), sep);
			break;
			case ('i'):
				printf("%d%s", va_arg(ap, int), sep);
			break;
			case ('f'):
				printf("%f%s", va_arg(ap, double), sep);
			break;
			case ('s'):
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", string, sep);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

