#include "main.h"
#include <stdio.h>

/**
 * print_number - print integer values
 * @n: num (integer) to print
 * Returns: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i *= -1;
		i = n;
		_putchar('-');
	}

	i /= 10;
	if (i != 0)
		print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
