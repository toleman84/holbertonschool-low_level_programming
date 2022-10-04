#include "main.h"

/**
 * print_diagonal - Short description
 * @n: Variable
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

char i;
char j;

for (; i < n; i++)
{

for (j = 1; j <= i; ++j)
{
_putchar(' ');

if (n <= 0) {_putchar('\n');}

}

_putchar('\\');
_putchar('\n');
}




}
