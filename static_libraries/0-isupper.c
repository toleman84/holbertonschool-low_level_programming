#include "main.h"

/**
 * _isupper - Short description
 *
 * Return: Always 0 (Success)
 * @c: Variable
 */

int _isupper(int c)
{

char ABC;

for (ABC = 'A'; ABC <= 'Z'; ABC++)
{
if (c == ABC)
{
return (1);
}
}

return (0);
}

