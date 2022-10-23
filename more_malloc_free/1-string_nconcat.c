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
unsigned int i, j, len1, len2;

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
if (n >= len2)
{
n = s2[j];
}
}
s3 = malloc(sizeof(char) * (len1 + n) +sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < n; j++)
{
s3[i] = s2[j];
}
s3[i] = '\0';
return (s3);
}

