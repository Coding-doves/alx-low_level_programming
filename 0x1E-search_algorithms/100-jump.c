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
{ size_t prev_jump = 0, jump = sqrt(size);

while (array[min(jump, size) - 1] < value)
{ printf("Value checked array[%ld] = [%d]\n", prev_jump, array[prev_jump]);
prev_jump = jump;
jump += sqrt(size);
if (prev_jump >= size)
return (-1);
}
printf("Value found between indexes [%ld] and [%ld]\n", prev_jump, array[prev_jump]);
while (array[prev_jump] < value)
{ printf("Value checked array[%ld] = [%d]\n", prev_jump, array[prev_jump]);
prev_jump++;
if (prev_jump == min(jump, size))
return (-1);
}
if (array[prev_jump] == value)
return (prev_jump);
return (-1);
}
