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
return (1);
_putchar('+');
}

else if (n == 0)
{
return (0);
_putchar('0');
}

else
{
return (-1);
_putchar('-');
}

return (0);
}

