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
unsigned int i;
char *ar;

ar = malloc(sizeof(c) * size);

if (ar == NULL)
{
return (NULL);
}
i = 0;

if (size <= 0)
{
return (NULL);
}
else
{
while (i < size)
{
*(ar + i) = c;
i++;
}
}

return (0);
}

