#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: pointer to  array
 * Return: nothing
*/

void print_chessboard(char (*a)[8]);
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

