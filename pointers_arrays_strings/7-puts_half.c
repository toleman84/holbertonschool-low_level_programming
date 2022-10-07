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

int i;
int n;
int len = strlen(str);

n = (len - 1) / 2;

for (i = 0; i < n; i++)
{
_putchar(n + '0');

}
_putchar('\n');

}

