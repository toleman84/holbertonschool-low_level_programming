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

for (mdr = 0; mdr < 10; mdr++)
{
	for (mnd = 0; mnd < 10; mnd++)
	{
		n = mdr * mnd;
	if ((n / 10) == 0)
	{
        _putchar(n + '0');
	_putchar(',');
	_putchar(' ');
        _putchar(' ');
	}
	else
		{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');

                _putchar(',');

		}
}
	_putchar('\n');
}

}

