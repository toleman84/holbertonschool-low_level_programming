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
int j = 0;

while (accept[j] != '\0')
{
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == accept[j])
{
s = &s[i];
return (s);
}

}
j++;
}

return (NULL);
}

