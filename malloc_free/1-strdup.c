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

p = malloc((len + 1) * sizeof(char));

if (p == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
p[i] = p[1];
}
p[len + 1] = '\0';


free(p);
return (p);
}

