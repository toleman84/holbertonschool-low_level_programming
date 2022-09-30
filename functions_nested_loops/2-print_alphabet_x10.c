#include "main.h"

/**
 * print_alphabet_x10 - Short description
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

char abc;
int num;

for (num = 1; num <= 10; num++)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
}

