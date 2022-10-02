#include "main.h"

/**
 * print_last_digit - Short description
 *
 * Return: 0 (Success)
 * @r: Variable
 */

int print_last_digit(int r)
{

int num;

if (r >= 0)
{
num = r % 10;
}

else
{
num = ((-1) * r) % 10;
}

_putchar((num % 10) + '0');
return (num % 10);
}

