#include "main.h"

/**
 * _memcpy - a function for copying memory area
 * @dest: destination of the copied bytes
 * @src: source to copy from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
