#include "main.h"
#include <string.h>

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

int i;

for (i = 0; dest[i] != '\0'; ++i) {dest[i] = src[i];}

dest[i] = '\0';
_putchar(dest[i]);

return (0);
}

