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

printf("Size of char: %d byte(s)\n", sizeof (charType));
printf("Size of int: %d byte(s)\n", sizeof (intType));
printf("Size of long int: %d byte(s)\n", sizeof (longIntType));
printf("Size of long long int: %d byte(s)\n", sizeof (longLongType));
printf("Size of float: %d byte(s)\n", sizeof (floatType));
return (0);
}
