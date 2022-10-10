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
int lengh;
int n;

for (lengh = 0; str[lengh] != '\0'; lengh++){
if (lengh % 2 != 0){n = (lengh - 2) / 2;}
else {n = (lengh - 1) / 2;}
}
for (i = n; i < lengh; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}

