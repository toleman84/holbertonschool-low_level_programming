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

for (s[i] != '\0'; i = 0; i++)
{
putchar(s[i]);

}
putchar('\0');

}

