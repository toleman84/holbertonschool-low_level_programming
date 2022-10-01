#include "main.h"

/**
 * islower - Short description
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{

char c;

for (c < 'a'; c <= 'z'; c++)
{
if (_islower(c))
{
_putchar('1');
}
else {
_putchar('0');
}
}
return (0);
}

