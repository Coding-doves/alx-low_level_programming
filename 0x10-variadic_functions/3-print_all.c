#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything of all type
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list all;

	unsigned i = 0, j;
	va_start(all, const format);

	while (*const format != '\0')
	{
		while (*const format == 'c' || *const format == 'i' ||
				*const format == 'f' || *const format == 's')
		{
			char c = va_arg(all, int);
			int i = va_arg(all, int);
			float f = va_arg(all, float);
			char *s = va_arg(all, char *);

			printf("%c", c);
			printf("%d", i);
			printf("%f", f);
			printf("%s", s);

			if (s == NULL)
				printf("nil");

			++const format;
		}
		++const format;
	}
	printf("\n");

	va_end(format);
}
