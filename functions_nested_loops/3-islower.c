#include "main.h"

/**
 * _islower - Short description
 *
 * Return: 0 (Success)
 */

int _islower (int c)
{

char abc;
int true = 1;
int false = 0;

for (abc = 'a'; abc <= 'z'; abc++)
if (_islower(c))
{
_putchar(true);
}
else
{
_putchar(false);
}
return (0);
}
