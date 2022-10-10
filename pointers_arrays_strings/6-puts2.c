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

int i, k;

while (k = 0; str[k] != '\0'; k++)
{
k -= 1;
}

while (i = 0; i <= k; i += 2)
{
_putchar(str[i]);

}
_putchar('\n');

}

