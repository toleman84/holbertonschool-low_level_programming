#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Short description
 *
 * @argc: first member
 * @argv: second member
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else if (argc == 1)
{
printf("0\n");
}

return (0);
}

