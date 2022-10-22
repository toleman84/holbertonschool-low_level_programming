#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Short description
 *
 * @s1: first member
 * @s2: second member
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
int len1 = 0;
int len2 = 0;
char *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
len1++;
}
for (j = 0; s2[j] != '\0'; j++)
{
len2++;
}

p = malloc(sizeof(char) * (len1 + len2 + 1));

if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
p[len1] = '\0';
for (j = 0; s2[j] != '\0'; j++)
{
p[i] = s2[j];
i++;
}
p[len2] = '\0';
return (p);
}

