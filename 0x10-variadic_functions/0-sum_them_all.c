#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: a constant variable number of argument passed
 * Return: 0 or sumed parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	/*go into the parameter and sum all int to add variable while looping*/
	for (i = 0; i < n; i++)
		add += va_arg(ap, int);

	va_end(ap);

	return (add);
}

