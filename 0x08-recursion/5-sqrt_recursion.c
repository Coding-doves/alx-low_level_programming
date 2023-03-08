#include "main.h"

/**
 * square - finds the square root of n using two numbers with recursion
 * @n: number to sqr
 * @i: number to get root
 * Return: square() of n or -1 if there is none
 */

int square(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (n < i * i)
	{
		return (-1);
	}
	else
	{
		return (square(n, i + 1));
	}
}

/**
 * _sqrt_recursion - square root with recursion
 * @n: number
 * Return: square of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (square(n, 0));
	}
}
