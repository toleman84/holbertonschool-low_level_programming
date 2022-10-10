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
int lengh = 0;

while (src[lengh] != '\0')
lengh++;

for (i = 0; i < lengh; i++)
{
dest[i] = src[i];
}

return (dest);
}
