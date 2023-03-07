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
		for (j = 0; j < 16; j++)
		{
			sqr = n * 16 + j;
			if ((sqr & 0x88 ) == 0)
				_putchar (a[sqr]);
		}

		_putchar ('\n');
	}
}

