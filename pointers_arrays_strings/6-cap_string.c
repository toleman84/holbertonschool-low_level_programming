#include "main.h"

/**
 * cap_string - Short description
 *
 * Return: Always 0 (Success)
 * @str: Variable
 */

char *cap_string(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i++)

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
i++;

while (str[i] != '\0')
{
if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'))
{
str[i] = str[i] - 'a' + 'A';
}
}
i++;

return (str);
}

