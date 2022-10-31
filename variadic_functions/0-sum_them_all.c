#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Short description.
 * @n: first member.
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}

