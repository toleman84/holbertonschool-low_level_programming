#include "main.h"

/**
 * _abs - Short description
 *
 * Return: 0 (Success)
 * @r: Variable
 */

int _abs(int r)
{

if (r < 0)
{
r = (-1) * r;
_putchar(r);
}

return (r);
}

