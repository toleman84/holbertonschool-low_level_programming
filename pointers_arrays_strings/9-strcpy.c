#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Short description
 *
 * Return: 0 (Success)
 * @src: Variable
 * @dest: Variable
 */

char *_strcpy(char *dest, char *src)
{

int i = 0;

for (; dest[i] != '\0';)
i++;

for (; src[i] != '\0';)
i++;

dest[i] = src[i];

return (dest);
}

