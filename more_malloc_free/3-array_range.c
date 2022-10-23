#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * array_range - Short description
 *
 * @min: first member
 * @max: second member
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{

int *p, i, num;

if (min > max)
{
return (NULL);
}

p = malloc(sizeof(int) * (max - min + 1));

if (p == NULL)
{
return (NULL);
}

num = (max - min + 1);

for (i = 0; i < num; i++)
{
p[i] = min++;
}

return (p);
}

