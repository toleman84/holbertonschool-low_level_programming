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

int i, k, n;

for (i = 0; str[i] != '\0'; i++){
if (i % 2 == 0){n = (i / 2;}
else {n = (i + 1) / 2;}
for (k = n; k <= str[i]; k++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

