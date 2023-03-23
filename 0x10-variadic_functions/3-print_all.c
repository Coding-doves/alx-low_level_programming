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

	unsigned int i = 0, j;
	const char fmt[] = "cifs";
	const char *st;

	va_start(all, format);

	while (format && format[i])
	{
		j = 1;
		while (fmt[j])
		{
			if (format[i] == fmt[j])
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				st = va_arg(all, char *);
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
