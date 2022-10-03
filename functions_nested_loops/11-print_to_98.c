#include "main.h"

/**
 * print_to_98 - Short description
 *
 * Return: 0 (Success)
 * @n: Variable
 */

void print_to_98(int n)
{

for (; n <= 98; n++)
{
_putchar(n + '0');
}

for (; n >= 98; n--)
{
_putchar(n + '0');
}

_putchar('\n');
}
