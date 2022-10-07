#include "main.h"

/**
 * print_rev - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

void print_rev(char *s)
{

int i;
int n = *s - 1;

for (i = 0; i < n; i++)
{
i--;
_putchar(s[i]);

}
_putchar('\n');

}

