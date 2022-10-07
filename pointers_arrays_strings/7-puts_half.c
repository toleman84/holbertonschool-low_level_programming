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
int len;

while (str[len] != '0')
len++;
{{
if (len % 2 == 0)
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
}
while (i = 0; i < len; i++)
{
_putchar(str[i]);

}
_putchar('\n');

}

