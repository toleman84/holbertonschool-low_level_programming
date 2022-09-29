#include <stdio.h>

/**
 * main - Short description
 *
 * Return: 0 (Success)
 */

int main(void)
{

int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}

