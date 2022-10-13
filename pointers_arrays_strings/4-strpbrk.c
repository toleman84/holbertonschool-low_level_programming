#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 * @accept: Variable
 */

char *_strpbrk(char *s, char *accept)
{

int i;
int j;

for (j = 0; accept[j] != '\0'; j++)
{
for (i = 0; s[i] != '\0'; i++)
{
if (accept[j] == s[i])
{
return (s + n);
}
}
}

return (NULL);
}

