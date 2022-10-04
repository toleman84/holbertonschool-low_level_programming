#include "main.h"

/**
 * more_numbers - Short description
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

char ch;

for (; ch < n; ch++)
{
_putchar(' ');

if (n == 0)
{
_putchar('\n');
}
}
_putchar('\\');
_putchar('\n');
}

