#include "main.h"

/**
 * print_sign - Short description
 *
 * Return: 0 (Success)
 * @c: Variable
 */

int print_sign(int n)
{

int num;

if (n < 0)
{
num = 1;
_putchar('+');
}

else if (n == 0)
{
num = 0;
_putchar('0');
}

else
{
num = -1;
_putchar('-');
}

return (0);
}

