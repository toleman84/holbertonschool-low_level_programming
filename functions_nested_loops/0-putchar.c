#include <unistd.h>
#include "main.h"

/**
 *
 * main - Shortdescription
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{

char ch[9] = "_putchar";
int i = 9;

for (i = 0; i < 9; i++);
_putchar(ch[i] + '0');

_putchar('\n');

return (0);
}

