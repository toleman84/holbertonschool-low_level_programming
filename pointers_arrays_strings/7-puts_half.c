#include "main.h"
#include <string.h>

/**
 * puts_half - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

void puts_half(char *str)
{

int i, h, k, g, n;

for (i = 0; str[i] != '\0'; i++)
{
h = i / 2;
for (k = h; k < i; k++)
{
_putchar(str[i]);


if (str[i] % 2 != 0)
{
n = (i - 1) / 2;
for (g = n; g < i; g++)
_putchar(str[g]);
}
}
}

_putchar('\n');
}

