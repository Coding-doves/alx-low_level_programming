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

	unsigned i = 0, j,;
	const char fmt[] = "cifs";

	va_start(all, format);

	while (format && format[i])
	{
		j = 0;
		while (fmt[j])
		{
			if (format[i] == fmt[j])
			{
				printf(", ");
				break;
			}
			j++;
		}
		int ch = va_arg(all, int);
		int in = va_arg(all, int);
		float fl = va_arg(all, double);
		char *st = va_arg(all, char *);

		switch (format[i])
		{
			case 'c':
				printf("%c", ch);
				break;
			case 'i':
				printf("%d", in);
				break;
			case 'f':
				printf("%f", fl);
				break;
			case 's':
				if (st == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", st);
				break;
		}
		i++;
	}
	printf("\n");

	va_end(all);
}
