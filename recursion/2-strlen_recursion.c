#include "main.h"

/**
 * _strlen_recursion - Short description
 *
 * @s: first member
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{

if (*s)
{
return (_strlen_recursion(s + 1) + 1);
}

return (0);
}

