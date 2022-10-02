#include "main.h"

/**
 * print_sign - Short description
 *
 * Return: 0 (Success)
 * @c: Variable
 */

int print_sign(int n)
{

if (n < 0)
{
_putchar((+));
return (1);
}

else if (n == 0)
{
_putchar(0);
return (0);
}

else
{
_putchar((-));
return (-1);
}

return (0);
}

