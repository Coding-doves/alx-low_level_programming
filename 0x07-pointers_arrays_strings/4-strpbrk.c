#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, t = 0;

	while (s[t] != '\0')
	{
		t++;
		while (accept[a] != '\0')
		{
			a++;
			if (s[t] == accept[j])
			{
				return (s[t]);
			}
		}
	}
	return ('\0');
}
