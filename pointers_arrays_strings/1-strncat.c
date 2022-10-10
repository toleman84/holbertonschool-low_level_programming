#include "main.h"

/**
 * _strcat - Short description
 *
 * Return: 0 (Success)
 * @dest: Variable
 * @src: Variable
 */

char *_strncat(char *dest, char *src, int n)
{

int j;
int lengh = 0;

while (dest[lengh] != '\0')
{
++lengh;
}

for (j = 0; src[j] != '\0'; ++j, ++lengh)
{
dest[lengh] = src[j];
}

for (j = 0; j < n; j++)
{
if (src[j] < n){dest[lengh] = '\0';}
}

return (dest);
}
