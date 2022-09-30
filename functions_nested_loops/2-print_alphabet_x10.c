#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

char abc;
start:
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
if (count <= 10)
goto start;
}
_putchar('\n');

}

