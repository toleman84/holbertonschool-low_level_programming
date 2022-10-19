#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Short description
 *
 * @size: first member
 * @c: second member
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ar;

ar = malloc(sizeof(c) * size);

if (ar == NULL)
{
return (NULL);
}

if (size == 0)
{
return (NULL);
}

while (i < size)
{
ar[i] = c;
i++;
}

return (ar);
}

