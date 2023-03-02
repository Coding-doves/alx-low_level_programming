#include "main.h"

/**
 * _strncat - concate 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: number of string 2 to print
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
