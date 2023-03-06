#include "main.h"

/**
 * _memset - this function fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: s pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
		n--;

	return (s);
}
