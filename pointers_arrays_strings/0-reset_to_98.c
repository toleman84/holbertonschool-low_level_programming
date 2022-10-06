#include "main.h"

/**
 * main - Short description
 * @*n Variable
 * Return: 0 (Success)
 */

void reset_to_98(int *n)
{

int n;
int *p;

p = &n;

printf("Address of 'n' : %p \n", &n);
printf("Value of 'p' : %p \n", p);

*p = 98;
printf("Value of 'n' %d \n", n);


}
