#include "main.h"

/**
 * str - length of binary string
 * @b: input
 * Return: length
 */

int str(const char *b)
{
	int count = 0;
	if (b == NULL)
		return(0);
	while (b[count])
		count++;
	return (count);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input to covert
 * Return: the converted number, or 0 if input  is not 0 or 1, or NULL
 * if input is empty
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decs = 0, base = 1, last = str(b), i;

	if (b == NULL)
	       return (0);

	for (i = last - 1; i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decs += base;
		base *= 2;
	}
	if (b[0] == '1')
		decs += base;

	return (decs);
}
