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
int cash, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (argv[1][0] == '-')
{
printf("0\n");
return (0);
}
if (argc == 2)
{
cash = atoi(argv[1]);
}
if (cash % 25 >= 0)
{
coins += cash / 25;
cash = cash % 25;
}
if (cash % 10 >= 0)
{
coins += cash / 10;
cash = cash % 10;
}
if (cash % 5 >= 0)
{
coins += cash / 5;
cash = cash % 5;
}
if (cash % 2 >= 0)
{
coins += cash / 2;
cash = cash % 2;
}
if (cash % 1 >= 0)
{
coins += cash;
}
printf("%d\n", coins);
return (0);
}

