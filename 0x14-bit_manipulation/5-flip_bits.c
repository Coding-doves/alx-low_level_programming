#include "main.h"

/**
 * flip_bits -  bits that need to be flipped in n to get m.
 *
 * @n: bit to flip
 * @m: flipped bit outcome
 * Return: number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0, mask = 1;

	flip = n ^ m;

	while (flip != 0)
	{
		count += flip & mask;
		flip = flip >> 1; /* here flip is divide by 2 until it is 0*/
	}
	return (count);
}
