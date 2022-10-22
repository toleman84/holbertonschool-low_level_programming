#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Short description
 *
 * @str: first member
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{

int i;
char *p;

if (str == NULL)
{
return (NULL);
}

p = malloc((sizeof(char) * strlen(str)) + 1);

for (i = 0; str[i] != '\0'; i++)
{
*(p + i) = *(str + i);
p[i + 1] = '\0';
}

free(p);
return (p);
}

