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

printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %d byte(s)\n", sizeof(intType));
printf("Size of long int: %d byte(s)\n", sizeof(longType));
printf("Size of long long int: %u byte(s)\n", sizeof(longLongType));
printf("Size of float: %g byte(s)\n", sizeof(floatType));
return (0);
}
