#include "main.h"
#include <stdio.h>

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
for (i = 0; i < argc; i++)
{
printf("%s \n", argv[i]);
}
return (0);
}

