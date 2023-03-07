#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: pointer to  array
 * Return: nothing
*/

void print_chessboard(char (*a)[8]);
{
	int n, j, sqr;

	for (n = 0; n < 8; n++)
	{
		for (j = 0; j < 8; j++)
		{
			sqr = n * 8 + j;
			_putchar (a[sqr]);
		}

		_putchar ('\n');
	}
}

