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

if (n > 0)
{
for (; i < n; i++)
{

for (j = 1; j <= i; ++j)
{
_putchar(' ');

}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}


}
