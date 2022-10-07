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

int i = 0;
int len = 0;
char temp;



while (s[len] != '\0')
i++;

{
while (i < len--)
{
temp = s[i];
s[i++] = s[len];
s[len] = temp;
}
}

}

