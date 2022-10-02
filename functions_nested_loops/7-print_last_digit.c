#include "main.h"

/**
 * print_last_digit - Short description
 *
 * Return: 0 (Success)
 * @r: Variable
 */

int print_last_digit(int r)
{

int INT_MIN;

if (r >= 0)
{
return (r % 10);
_putchar(r);
}

else if (r == INT_MIN)
{
return (-(r % 10));
_putchar(r + '0');
}

else
{
return (((-1) * r) % 10);
_putchar(r);
}

return (0);
}

