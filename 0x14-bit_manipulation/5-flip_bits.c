#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: flipped bit
 * @m: output of n if flipped
 * Return:  number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int add = 0;

	while (num)
	{
		add += num & 1;
		num >>= 1;
	}
	return (add);
}
