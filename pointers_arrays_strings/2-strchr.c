#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 * @c: Variable
 */

char *_strchr(char *s, char c)
{

int i = 0;

while (s[i] != '\0' && s[i] != c)
i++;
{
if (s[i] == c)
{
return (&s[i]);
}
else
{
return (NULL);
}
}

}

