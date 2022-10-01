#include "main.h"

/**
 * _isalpha - Short description
 *
 * Return: 0 (Success)
 * @c: Variable
 */

int _isalpha(int c)
{

char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (_isalpha(c))
{
_putchar(1);
}

else
{
_putchar(0);
}
}

return (0);
}

