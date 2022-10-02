#include "main.h"

/**
 * print_last_digit - Short description
 *
 * Return: 0 (Success)
 * @r: Variable
 */

int print_last_digit(int r)
{

if (r >= 0)
{
return (r % 10);
_putchar(r % 10);
}
else
{
return ((-1) * r);
_putchar((-1) * r);
}
}


