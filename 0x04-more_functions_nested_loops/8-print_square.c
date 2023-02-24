#include "main.h"

/**
 * print_square - creates square
 * @size: print sizeof #
 * Return: 0
 */

void print_square(int size)
{
	int j, i;

	for (j = 0; j <= size; j++)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');

			if (i <= 0)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
