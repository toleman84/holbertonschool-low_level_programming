#include "main.h"

/**
 * _memset - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 * @b: Variable
 * @n: Variable
 */

unsigned int _strspn(char *s, char *accept)
{

int i = 0;
int j;

int count = 0;

while (s[i] != '\0')
{
for (j = 0 ; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
count++;
}
}
i++;
}

return (count);
}

