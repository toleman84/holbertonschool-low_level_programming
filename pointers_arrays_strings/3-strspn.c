#include "main.h"

/**
 * _strspn- Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 * @accept: Variable
 */

unsigned int _strspn(char *s, char *accept)
{

int i;
int j;
int count = 0;

for (j = 0; accept[j] != '\0'; j++)
{
for (i = 0; s[i] != 32 && s[i] != '\0'; i++)
{
if (s[i] == accept[j])
{
count++;
}
}
}
return (count);
}

