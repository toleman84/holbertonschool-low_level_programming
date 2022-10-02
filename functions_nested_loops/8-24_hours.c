#include "main.h"

/**
 * jack_buaer - Short description
 * Description: print 24 hours
 * Return: Nothing
 */

void jack_bauer(void)
{

int h;
int m;

for (h = 00; h <= 23; h++)
{
for (m = 00; h <= 59; m++)
{

_putchar(h + '0');
_putchar(':');
_putchar(m + '0');
_putchar('\n');
}
}

}

