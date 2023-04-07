#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int mask = 1;
	char *ptr;

	ptr = (char *) &mask;

	if (ptr != 0)
		return (1);
	else
		return (0);
}
