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
for (i = 0; dest[i] != '\0'; dest++)

dest[i] = src[i];


return (dest);
}
