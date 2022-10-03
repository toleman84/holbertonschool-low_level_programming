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
	for (; n <= '5756'; n++)
		{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
}
else
{
	for (; n >= '5756'; n--)
		{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
}

}

