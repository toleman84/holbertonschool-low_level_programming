#include "main.h"

/**
 * print_line - Short description
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{

char ch;

for (; ch <= n; ch++)
{
_putchar('_');

if (n == 0)
{
_putchar('\n');
}
}
_putchar('\n');
}

