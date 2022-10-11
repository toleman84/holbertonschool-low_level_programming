#include "main.h"
#include <string.h>

/**
 * _strcmp - Short description
 *
 * Return: 0 (Success)
 * @s1: Variable
 * @s2: Variable
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}

