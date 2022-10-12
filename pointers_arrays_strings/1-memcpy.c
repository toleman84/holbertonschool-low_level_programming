#include "main.h"

/**
 * _memcpy - Short description
 *
 * Return: Always 0 (Success)
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

