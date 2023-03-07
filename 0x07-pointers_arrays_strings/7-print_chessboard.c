#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: pointer to  array
 * Return: nothing
*/

void print_chessboard(char (*a)[8]);
{
	int i, j, S1, S2;

	S1 = 0;
	S2 = 0;

	for (i = 0; i <= (size * size); i + size + 1)
	S1 += a[i];
	for (j = size - 1; n <= (size * size) - size; n = n + size + 1)
		S2 += a[n];
	printf("%d, %d\n", S1, S2);
}

