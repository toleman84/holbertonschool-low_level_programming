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



for (i = 0; s[len] != '\0'; len++)
{
for (i < len--)
{
temp = s[i];
s[i++] = s[len];
s[len] = temp;

}
}

}

