#include "main.h"

/**
 * _puts - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

void _puts(char *str)
{

int i;

for (i = 0; str[i] != '\0';)
{
_putchar(str[i]);
i++;
}
_putchar('\n');

}

