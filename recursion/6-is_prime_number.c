#include "main.h"

/**
 * sqrt_rec - short description
 *
 * @k: first member
 * @n: second member
 * Return: Always 0 (Success)
 */

int sqrt_rec(long k, long n)
{

long next_k = (k + n / k) / 2;

if (k * k <= n && (k + 1) * (k + 1) > n)
{
return (k);
}
else
{
return (sqrt_rec(next_k, n));
}

}

/**
 * is_prime_number - short description
 *
 * @n: first member
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{

if (n % 2 == 0)
{
return (0);
}
else if (sqrt_rec(1, n) >= 1)
{
return (0);
}
else
{
return (1);
}

}

