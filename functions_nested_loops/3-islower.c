#include "main.h"

/**
 * islower - Short description
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{

char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == c)
_putchar('1' - 0);
}
return (0);
}
