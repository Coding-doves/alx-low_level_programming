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
{
size_t prev_jump = 0, size_t jump = 0;

if (array == NULL)
return (-1);
while (array[jump] < value)
{
printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
prev_jump = jump;
jump += sqrt(size);
if (jump > size - 1)
break;
}
printf(" Value found between indexes [%ld] and [%ld]\n", prev_jump, jump)
while (prev_jump <= min(jump, size - 1))
{
printf("Value checked array[%ld] = [%d]\n", prev_jump, array[prev_jump]);
if (array[prev_jump] == value)
return (prev_jump);
prev_jump++;
}
return (-1);
}
