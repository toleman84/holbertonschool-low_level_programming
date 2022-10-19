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

char *ar = malloc(size * sizeof(c));
printf("%s\n", ar);

if (size == 0)
{
return (NULL);
}

if (!c)
{
return (NULL);
}

return (0);
}

