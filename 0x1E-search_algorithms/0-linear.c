#include "search_algos.h"

/**
 * linear_search - search sequencialy
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: value index or -1 if not in array
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array != NULL)
    {
        for (; i < size; i++)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);

            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}
