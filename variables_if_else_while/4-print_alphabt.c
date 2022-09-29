#include <stdio.h>

/**
 * main - Short description
 *
 * Return: 0 (Success)
 */

int main(void)
{

char abc= 'a';

for (; abc <= 'z'; abc++;)
{
if (abc != 'e' && abc != 'q')
putchar(abc);
}
putchar('\n');
return (0);
}

