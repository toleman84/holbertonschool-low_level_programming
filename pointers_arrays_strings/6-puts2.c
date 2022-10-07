#include "main.h"
#include <string.h>

/**
 * puts2 - Short description
 *
 * Return: 0 (Success)
 * @str: Variable
 */

void puts2(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i+=2)
{
_putchar(str[i]);
str[i/2] = str[i];

}
_putchar('\n');

}

