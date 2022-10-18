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
int a, b, result;

if (argc < 3)
{
printf("Error\n");
return (1);
}

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
a = atoi(argv[i]);
b = atoi(argv[i]);
result = a *b;
}
printf("%d\n", result);
}

return (0);
}

