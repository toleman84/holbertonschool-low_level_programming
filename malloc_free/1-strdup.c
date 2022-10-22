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

p = malloc(sizeof(char) * strlen(str) + 1);

if (p == NULL)
{
return (NULL);
}

if (*str == '\0')
{
*p = '\0';
return (p);
}
else
{
while (*(str + i) != '\0')
{
*(p + i) = *(str + i);
i++;
}
}

free(p);
return (p);
}

