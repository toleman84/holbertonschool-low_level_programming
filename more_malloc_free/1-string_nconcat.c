#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - Short description
 *
 * @s1: first member
 * @s2: second member
 * @n: third member
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int num, i, j, str;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
str = strlen(s2);
num = n;
if (num >= str)
{
num = str;
}

s3 = malloc(sizeof(*s3) * strlen(s1) + num + 1);

if (s3 == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}

for (j = 0; j < num; j++)
{
s3[i + j] = s2[j];
}
s3[i + j] = '\0';

return (s3);
}

