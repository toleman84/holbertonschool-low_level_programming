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

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

s3 = malloc(sizeof(char) * n);

if (s3 == NULL)
{
return (NULL);
}

strcat(s3, s1);
strcat(s3, s2);

return (s3);
}

