#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates the range of an array of integers.
 * @min: min number
 * @max: max number
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i] = min;

	return (ptr);
}