#include "main.h"
#include <string.h>

/**
 * _strlen - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 */

int _strlen(char *s)
{

int i;

for (i = 0; s[i] != '\0';)
i++;


return (i);
}

