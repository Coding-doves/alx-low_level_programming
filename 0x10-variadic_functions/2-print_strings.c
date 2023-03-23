#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		char *out = va_arg(str, char *);

		if (out == NULL)
			printf("nil");

		printf("%s", out);
		
		/*if i(the counterLoop) is not equal to the last number of string(n-1)*/
		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
