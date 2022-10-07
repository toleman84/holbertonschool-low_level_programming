#include "main.h"

/**
 * rev_string - Short descriptcion
 *
 * Return: Always 0 (Success)
 * @s : Variable
 */

void rev_string(char *s)
{

int i;
int temp;


for (i = 0; i <= s; i++)
{
temp = s;
s = s[i - 1];
s[i - 1] = temp;

}

}

