#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
  * print_all - Prints anything
  * @format: type of argument
  * Return: void
  */
void print_all(const char * const format, ...)
{
	char *auxs, *separator;
	int a = 0;
	int counter = 0;
	va_list list;

	separator = ", ";
	va_start(list, format);
	while (format && format[counter])
		counter++;
	while (format && format[a])
	{
		if (a == counter - 1)
			separator = "";
		switch (format[a])
		{
			case ('c'):
				printf("%c%s", va_arg(list, int), separator);
			break;
			case ('i'):
				printf("%d%s", va_arg(list, int), separator);
			break;
			case ('s'):
				auxs = va_arg(list, char *);
				if (auxs == NULL)
				{
					printf("(nil)%s", separator);
					break;
				}
				printf("%s%s", auxs, separator);
			break;
			case ('f'):
				printf("%f%s", va_arg(list, double), separator);
			break;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}

