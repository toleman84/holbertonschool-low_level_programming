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

while (*src)
{
*dest++ = *src++;
}

return (dest);
}

