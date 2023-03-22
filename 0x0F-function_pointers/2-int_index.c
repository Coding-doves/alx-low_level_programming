#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: of functions that passes instructions
 * @size: of array
 * @cmp: function pointer to int_index
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
