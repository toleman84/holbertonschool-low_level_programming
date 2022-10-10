#include "main.h"

/**
 * _strncat - Short description
 *
 * Return: 0 (Success)
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 */

char *_strncat(char *dest, char *src, int n)
{

int j = 0;
int lengh = 0;

while (dest[lengh] != '\0')
{
++lengh;
}

while (src[j] != src[n])
{
dest[lengh] = src[j];
lengh++;
j++;
}
dest[lengh] = '\0';

return (dest);
}

