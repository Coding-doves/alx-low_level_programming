#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input
 * Return: the converted number, or 0 if ir fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, pow = 1, rem = 0;


	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	while (i > 0)
	{
		i--;
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] != '0')
				rem += pow;
			pow *= 2;
		}
		else
			return (0);
	}
	return (rem);
}
