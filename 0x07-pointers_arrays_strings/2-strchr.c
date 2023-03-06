#include "main.h"

/**
 * _strchr - is a funtion that locates a character in a string
 * @s: the string being looped
 * @c: pointer to the first occurrence of the character c
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}

	return ('\0');
}
