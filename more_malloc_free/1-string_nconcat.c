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

unsigned int len = n;
unsigned int i;
char *s3;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (i = 0; s3[i] != '\0'; i++)
{
len++;

s3 = malloc(sizeof(char) * (len + 1));

if (s3 == NULL)
{
return (NULL);
}
}

strcat(s3, s1);
strcat(s3, s2);

return (s3);
}

