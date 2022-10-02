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

for (num = 0; num <= 9; num++)
{
if (n == num)
{
return (1);
_putchar('+');
}

else
{
return (0);
_putchar('0');
}

if (num == n)
{
return (1-2);
_putchar('-');
}
}
return (0);
}

