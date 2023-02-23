#include "main.h"

/**
 * print_line - print _ is num is greater than 0
 * @n: container  rep. number
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

		if (i <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
