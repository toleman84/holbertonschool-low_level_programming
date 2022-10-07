#include "main.h"
#include <string.h>

/**
 * rev_string - Short descriptcion
 *
 * Return: Always 0 (Success)
 * @s : Variable
 */

void rev_string(char *s)
{

int i;
int len;
char temp;

len = strlen(s);

for (i = 0; s[i] != '\0'; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;

}

}

