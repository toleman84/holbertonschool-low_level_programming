#include "main.h"

/**
 * reverse_array - Short description
 *
 * Return: Always 0 (Success)
 * @a: Variable
 * @n: Variable
 */

void reverse_array(int *a, int n)
{

int low;
int high = n - 1;
int tmp;

for (low = 0; low < high; low++, high--)
{
tmp = a[low];
a[low] = a[high];
a[high] = tmp;

}

}

