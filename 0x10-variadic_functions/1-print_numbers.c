#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: number of argument passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int out = va_arg(ap, int);

		printf("%d", out);

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);

}
