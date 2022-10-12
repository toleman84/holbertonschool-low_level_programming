#include "main.h"

/**
 * leet - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

char *leet(char *str)
{

int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
}
}

}
return (str);
}

