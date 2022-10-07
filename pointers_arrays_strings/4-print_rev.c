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
int len;
int temp;

len = strlen(s);

for (i = 0; s[i] != '\0'; i++)
{

temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;

_putchar(s[i]);

}
_putchar('\n');

}

