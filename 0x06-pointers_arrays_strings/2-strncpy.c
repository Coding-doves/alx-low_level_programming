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
	int j;
	int i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
