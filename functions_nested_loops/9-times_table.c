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
_putchar(n + '0');

}
}

}

