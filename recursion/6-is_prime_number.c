#include "main.h"

/**
 * is_prime_number - short description
 *
 * @n: first member
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{

if ((n / n == 1) && (n / 1 == n))
{
return (1);
}

if ((n <= 1) && (n % 2 == 0))
{
return (0);
}

}

