#include "main.h"

/**
 * print_binary - Short desciption.
 * @n: first member.
 *
 *
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 0, num_max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (num_max)
	{
		if (i == 1 && (n & num_max) == 0)
			_putchar('0');
		else if ((n & num_max) != 0)
		{
			_putchar('1');
			i = 1;
		}
		i >>= 1;
	}

}

