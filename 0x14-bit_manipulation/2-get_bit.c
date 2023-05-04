#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input
 * @index: position to retrieve
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	if (mask & n)
		return (1);
	else
		return (0);
}
