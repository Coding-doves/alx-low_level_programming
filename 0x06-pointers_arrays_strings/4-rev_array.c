#include "main.h"

/**
 * reverse_array - reverse string
 * @a: array
 * @n: number of strings
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = n - 1; i >= n; i--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}