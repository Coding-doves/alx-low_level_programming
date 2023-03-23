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
	int ch, in;
	float fl;
	char *st;
	
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
				ch = va_arg(all, int);
				printf("%c", ch);
				break;
			case 'i':
				in = va_arg(all, int);
				printf("%d", in);
				break;
			case 'f':
				fl = va_arg(all, double);
				printf("%f", fl);
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
