#include "main.h"

/**
 * reset_to_98 - Short description
 *
 * Return: 0 (Success)
 * @n: Variable
 */

char *_strcat(char *dest, char *src)
{

int j;
int lengh = 0;

while (dest[lengh] != '\0'){++lengh}

for (j = 0; src[j] != '\0'; ++j; ++lengh) {dest[lengh] = src[j];}

dest[lengh] = '\0';

return (dest);
}
