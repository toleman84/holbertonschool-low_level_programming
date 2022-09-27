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

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(longIntType));
printf("Size of int: %u bytes\n", sizeof(longLongType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
