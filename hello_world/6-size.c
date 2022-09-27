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

printf("Size of char: %zu bytes\n", sizof(charType));
printf("Size of int: %zu bytes\n", sizof(charType));
printf("Size of int: %zu bytes\n", sizof(longIntType));
printf("Size of int: %u bytes\n", sizof(longLongType));
printf("Size of float: %zu bytes\n", sizof(floatType));
return (0);
}
