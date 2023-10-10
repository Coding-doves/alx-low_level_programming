#include "search_algos.h"
/**
 * array_index - search sequencialy
 * @array: array
 * @first: size of array
 * @last: value to search
 */
void array_index(size_t first, size_t last)
{
    int comma = 0;

    printf("Searching in array: ");
    for (; first <= last; first++)
    {
        if (comma == 1)
            printf(", ");

        printf("%ld", first);

        comma = 1;
    }
    printf("\n");
}
/**
 * binary_search - search sequencialy
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: value index or -1 if not in array
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, mid, high = size - 1;

    if (array == NULL)
        return (-1);

    array_index(low, high);
    while (low != high)
    {
        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;

        array_index(low, high);
    }

    if (array[low] == value)
        return (low);

    return (-1);
}
