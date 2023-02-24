#include "main.h"

/**
 * print_square - creates square
 * @size: print sizeof #
 * Return: 0
 */

void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
