#include "main.h"

/**
 * _strchr - is a funtion that locates a character in a string
 * @s: the string being looped
 * @c: pointer to the first occurrence of the character c
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		return s[i];
		i++;
	}

	return ('\0');
}
