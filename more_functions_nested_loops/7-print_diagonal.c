#include "main.h"

/**
 * print_diagonal - Short description
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

char i;
char j;

for (; i < n; i++){

for (j = 1; j <= i; ++j){

_putchar(' ');

}

_putchar('\\');
_putchar('\n');
}

_putchar('\n');

return (print_diagonal);
}
