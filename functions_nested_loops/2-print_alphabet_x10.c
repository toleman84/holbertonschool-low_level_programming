#include "main.h"

/**
 * print_alphabet_x10 - Short description
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

char abc;

do{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
}while (abc <= 10);

_putchar('\n');
}

