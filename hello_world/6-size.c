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
int longIntType;
int longLongType;
float floatType;

printf("Size of char: %u byte(s)\n", charType);
printf("Size of int: %u byte(s)\n", intType);
printf("Size of long int: %u byte(s)\n", longIntType);
printf("Size of long long int: %u byte(s)\n", longLongType);
printf("Size of float: %f byte(s)\n", floatType);
return (0);
}
