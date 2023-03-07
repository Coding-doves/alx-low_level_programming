#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: pointer to  array
 * Return: 0
 */

void print_chessboard(char (*a)[8]);
{
	int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
			j = i;
			_putchar('\n');

		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
