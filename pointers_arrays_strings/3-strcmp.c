#include "main.h"
#include <string.h>

/**
 * _strncpy - Short description
 *
 * Return: 0 (Success)
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' && *s2 != '\0')
{
s1++;
s2++;
}

return (*s1 - *s2);
}

