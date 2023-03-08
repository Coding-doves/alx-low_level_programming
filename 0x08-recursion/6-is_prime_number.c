#include "main.h"

/**
 * prime - prime number
 * @n: value
 * @i: value to divide with n
 * Return: 1 if prime or 0 if not prime
 */

int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime(n, i + 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - print prime number using recursion
 * @n: number to be evaluated
 * Return: 1 if prime or 0 for not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}
