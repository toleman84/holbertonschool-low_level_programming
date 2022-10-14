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

if (*s != 0)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar(10);
}
}

}

