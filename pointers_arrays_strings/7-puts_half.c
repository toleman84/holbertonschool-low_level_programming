#include "main.h"
#include <string.h>

/**
 * _puts - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

void puts_half(char *str)
{

int n;
int len = strlen(str);

n = (len - 1) / 2;

_putchar(n);

_putchar('\n');

}

