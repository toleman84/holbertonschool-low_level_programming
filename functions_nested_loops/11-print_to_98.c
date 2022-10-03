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
			_putchar(n);

			if (n == 98)
			{
			_putchar(", ");
			}
		_putchar("\n");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
		_putchar("%d", n);

		if (n == 98)
		{
			_putchar(", ");
		}
	_putchar("\n");
		}
	}

}

