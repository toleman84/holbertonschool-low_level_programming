#include <stdio.h>

/**
 * main - Short description
 *
 * Return: 0 (Success)
 */

int main(void)
{

int num1;

for (num1 = 0; num1 < 9; num1++)
{
for (num2 = num1 + 1; num2 <= 9; num2++)
{
putchar(num1);
putchar(num2);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return(0);
}

