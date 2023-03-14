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
	int **p;
	int d, a;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int *)malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		p[d] = (int *)malloc(sizeof(int) * width);
		if (p[d] == NULL)
		{
			for (a = 0; a <= d; a++)
				free(p[a]);
			free(p);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (a = 0; a < width; a++)
		{
			p[d][a] = 0;
		}
	}

	return (p);
}
