#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: charater
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');

		for (j = 0; j <= i; j++)
		{
			_putchar(' ');

			if (j <= 0)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
