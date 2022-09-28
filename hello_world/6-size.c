#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char charType;
int intType;
int longType;
int longLongType;
float floatType;

printf("Size of char: %d byte(s)\n", charType);
printf("Size of int: %d byte(s)\n", intType);
printf("Size of long int: %ld byte(s)\n", longType);
printf("Size of long long int: %lu byte(s)\n", longLongType);
printf("Size of float: %g byte(s)\n", floatType);
return (0);
}
