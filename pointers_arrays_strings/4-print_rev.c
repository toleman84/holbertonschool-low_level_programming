#include "main.h"
#include <string.h>

/**
 * print_rev - Short description
 *
 * Return: Always 0 (Success)
 * @s: Variable
 */

void print_rev(char *s)
{

int i;

for (i = 0; s[i] != '\0'; i++)
{
for (i)
_putchar(s[--i]);

}
_putchar('\n');

}

