#include "main.h"

/**
 * more_numbers - Short description
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{

int num;
int nums;

for (num = 0; num <= 10; num++)
{
for (nums = 0; nums <= 14; nums++)
{

if (nums > 9)

_putchar((nums / 10) + '0');
_putchar((nums % 10) + '0');

}
_putchar('\n');

}

}

