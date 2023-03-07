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
	int i, n, sum = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum = sum2 + a[i];
	
	for (n = size - 1; n<= (size * size) - size; n = n + size -1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum, sum2);
}
