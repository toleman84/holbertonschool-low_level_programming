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
int len = 0;
char *p;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
len++;
}

p = malloc(sizeof(char) * (len + 1));

if (p == NULL)
{
return (NULL);
}

if (*str == '\0')
{
*p = '\0';
return (p);
}

for (i = 0; str[i] != '\0'; i++)
{
p[i] = str[i];
}
p[len] = '\0';

return (p);
}

