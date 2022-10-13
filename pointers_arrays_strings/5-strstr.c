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

for (j = 0; haystack[j] != '\0'; j++)
{
for (i = 0; needle[i] != '\0'; i++)
{
if (needle == 0) {return (haystack);}
if (haystack[j] == needle[i]) {j++, j++;}
}
}
return (NULL);
}

