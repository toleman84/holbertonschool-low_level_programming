#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Short description
 *
 * @s1: first member
 * @s2: second member
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
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

s3 = malloc((strlen(s1) + (strlen(s2)) + 1) * ((sizeof(s1)) + (sizeof(s2))));

strcat(s3, s1);
strcat(s3, s2);

return (s3);
}

