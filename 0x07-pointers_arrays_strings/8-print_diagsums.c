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

        int i, j, S1, S2;

        S1 = 0;
        S2 = 0;

        for (i = 0; i <= (size * size); i + size + 1)
        S1 += a[i];
        for (j = size - 1; n <= (size * size) - size; n = n + size + 1)
                S2 += a[n];
        printf("%d, %d\n", S1, S2);
}
