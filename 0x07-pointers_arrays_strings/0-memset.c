#include "main.h"

/**
 * _memset - this function fills memory with a constant byte.
 * @s: pointer
 * @b: source
 * @n: number of bytes of the memory area to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*s[i] = b;

	return (s);
}
