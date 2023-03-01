#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string 1
 * @src: string 2
 * @n: number of strings to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n != '\0')
	{
		dest[i] = src[i];
		i++
	}

	dest[i] = '\0';
	return (dest);
}
