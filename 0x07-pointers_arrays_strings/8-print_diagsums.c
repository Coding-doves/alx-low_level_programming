#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: variable
 * @size: size of/ nmmber to be use
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, row, col, sum = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d\n", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j)
			{
			sum = sum + a[i][j];
			}
		}
	}

	printf("%d\n", sum);
}
