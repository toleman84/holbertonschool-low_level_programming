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

printf("Size of char: %d\n byte(s)\n", charType);
printf("Size of int: %d\n byte(s)\n", intType);
printf("Size of long int: %d\n byte(s)\n", longType);
printf("Size of long long int: %u\n byte(s)\n", longLongType);
printf("Size of float: %g\n byte(s)\n", floatType);
return (0);
}
