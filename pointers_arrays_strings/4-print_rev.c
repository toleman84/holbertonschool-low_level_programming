#include "main.h"

/**
 * print_rev - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 */

void print_rev(char *s)
{

int i = 0;

while (s[i] != '\0'; i++)
{
while (i)
_putchar(s[--i]);

}
_putchar('\n');

}

