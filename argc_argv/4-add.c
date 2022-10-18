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
int i;
int sum = 0;
int j = 0;

if (argc == 0)
{
printf("0\n");
}
else if (argc > 1)
{
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
{
if (argv[argc][j] > '0' && argv[argc][j] < '9')
{
}
else
{
printf("Error\n");
return (1);
}
}

return (0);
}

