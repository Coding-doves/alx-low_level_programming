#include "main.h"
/**
 * print_most_numbers - do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;
	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
