#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input
 * @index:  bit you want to set
 * Return: 1 or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if (n == NULL)
		return (-1);

	mask <<= index;
	return (*n |= mask);
}
