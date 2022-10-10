#include "main.h"

/**
 * swap_int - Short description
 *
 * Return: Always 0 (Success)
 * @a: Variable
 * @b: Variable
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
_putchar(", ");
}
}
_putchar('\n');

}

