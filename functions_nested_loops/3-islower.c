#include "main.h"

/**
 * _islower - Short description
 *
 * Return: 0 (Success)
 * @c: Variable
 */

int _islower(int c)
{

char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == c)
{
_putchar('1');
}
}

return (0);
}

