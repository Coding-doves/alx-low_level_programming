#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: length or row of the array
 * @height: height of column of the array
 * Return: p
 */

int **alloc_grid(int width, int height)
{
	int d[0][0];

	if (width <= 0 || height <= 0)
		return (NULL);

	int **p = (int *)malloc(sizeof(int *) * (width * height));

	if (p == NULL)
		return (NULL);

	for (p = &d[0][0]; p <= &d[width - 1][height - 1]; p++)
		*p = 0;

	free(p);
	return (p);
}
