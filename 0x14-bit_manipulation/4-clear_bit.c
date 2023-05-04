#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input
 * @index:  bit you want to set
 * Return: 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if (n == NULL)
		return (-1);

	*n &= mask;
	return (1);
}
