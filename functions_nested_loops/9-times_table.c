#include "main.h"

/**
 * times_table - Short description
 *
 * Description: function prints 9 times table
 * Return: 0 (Success)
 */

void times_table(void)
{

int mdr;
int mnd;
int n;

for (mdr = 0; mdr <= 9; mdr++)
{
	for (mnd = 0; mnd <= 9; mnd++)
	{
		n = mdr * mnd;
	
		_putchar(',');
		_putchar(' ');

			if ((n / 10) == 0)
		{
		if (mnd = 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
	}
	_putchar('\n');
}

}

