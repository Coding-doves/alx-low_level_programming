#include "main.h"

/**
 * _strcat - fuction to concat two words
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int  i;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i];
	}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
