#include "main.h"

/**
 * _strcat - fuction to concat two words
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
