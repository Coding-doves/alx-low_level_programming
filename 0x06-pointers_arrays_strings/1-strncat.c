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

	for (i = 0; i < dest[i]; i++)
	{
		dest[i];
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
