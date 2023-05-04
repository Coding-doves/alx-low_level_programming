#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int m  = 1;
	char *e = (char *)&m;

	if (*e == 1)
		return (1);
	else
		return (0);
}
