#include "main.h"

/**
 * _puts_recursion - short description
 *
 * @s: first member
 */

void _puts_recursion(char *s)
{

int i;

for (i = 0; s[i] != '\0'; i++)
{
_puts(s[i]);
}

return (0);
}

