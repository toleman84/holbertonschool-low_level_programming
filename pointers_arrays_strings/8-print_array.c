#include "main.h"
#include <stdio.h>

/**
 * print_array - Short description
 *
 * Return: Always 0 (Success)
 * @a: Variable
 * @n: Variable
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

