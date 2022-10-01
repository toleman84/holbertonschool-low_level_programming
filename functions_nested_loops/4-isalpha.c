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
char ABC;

for (ABC = 'A'; ABC <= 'Z'; ABC++)
{
if (ABC == c)
{
return (1);
}
}

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == c)
{
return (1);
}
}
return (0);
}

