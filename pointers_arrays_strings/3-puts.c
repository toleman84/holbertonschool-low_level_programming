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

for (; str[i] != 0;)
{
_puts(str[i]);
i++;
}

}

