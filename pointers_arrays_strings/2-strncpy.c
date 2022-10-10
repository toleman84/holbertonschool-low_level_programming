#include "main.h"
#include <stddef.h>

/**
 * _strncopy - Short description
 *
 * Return: 0 (Success)
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 */

char *_strncpy(char *dest, char *src, int n)
{

size_t i;

for (i = 0; i < n; i++)

while (src[i] != '\0') {dest[i] = src[i];}

for (; i < n; i++) {dest[i] = '\0';}

return (dest);
}

