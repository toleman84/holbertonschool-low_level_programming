#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Short description
 *
 * Return: 0 (Success)
 */

int main(void)
{

char abc;

for(abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for(abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}

