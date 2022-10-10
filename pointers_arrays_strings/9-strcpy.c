#include "main.h"

/**
 * _strcpy - Short description
 *
 * Return: 0 (Success)
 * @src: Variable
 * @dest: Variable
 */

char *_strcpy(char *dest, char *src)
{

int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

return (dest);
}
