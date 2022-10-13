#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - Short description
 *
 * Return: Always 0 (Success)
 * @haystack: Variable
 * @needle: Variable
 */

char *_strstr(char *haystack, char *needle)
{

int i;
int j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (0);
}

