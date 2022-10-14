#include "main.h"

/**
 * _strlen_recursion - short description
 *
 * @s: first member
 */

int _strlen_recursion(char *s)
{

if (*s)
{
_putchar(*s);
_strlen_recursion(s + 1);
}

return (0);
}

