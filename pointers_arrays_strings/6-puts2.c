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
int lengh = 0;

while (str[i++])
lengh++;

for (i = 0; i <= lengh; i += 2)
{
_putchar(str[i]);

}
_putchar('\n');

}

