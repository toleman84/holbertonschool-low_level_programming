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
 * _sqrt_recursion - short description
 *
 * @n: first member
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

else
{
return (sqrt_rec(1, n));
}

}

