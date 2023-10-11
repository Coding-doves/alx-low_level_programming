#include "search_algos.h"
/**
 * min - find minimum value
 * @a: value one
 * @b: value 2
 * Return: the smallest value
*/
size_t min(size_t a, size_t b)
{
return ((a < b) ? a : b);
}

/**
 * jump_search - jump search
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: value index or -1 if not in array
*/
int jump_search(int *array, size_t size, int value)
{ size_t jump = sqrt(size), size_t prev_jump = 0;

if (array == NULL || size == 0)
return -1;
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
while (array[prev_jump] < value)
{ prev_jump += jump;
if (prev_jump < size)
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
else
break;
}
printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
for (size_t i = prev_jump - jump; i <= prev_jump && i < size; i++)
{ printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return -1;
}
