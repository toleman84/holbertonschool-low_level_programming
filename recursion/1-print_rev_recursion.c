#include "main.h"

/**
 * _print_rev_recursion - short description
 *
 * @s: first member
 */

void _print_rev_recursion(char *s)
{

if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}

}

