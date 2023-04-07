#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit to get
 * @index: position of bit to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get, mask = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	get = (n >> index) & mask;
	return (get);
}
