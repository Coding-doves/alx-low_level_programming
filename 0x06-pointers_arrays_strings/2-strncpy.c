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
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;

	for (j = 0; j < n && src[j] != '\0';)
		j++;
	dest[i + j] = src[j];


	dest[i + j] = '\0';
	return (dest);
}
