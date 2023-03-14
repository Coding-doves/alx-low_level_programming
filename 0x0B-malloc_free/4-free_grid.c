#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free space
 * @height: height of 2d array
 * @grid: 2d array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
