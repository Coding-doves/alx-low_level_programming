#include "main.h"

/**
 * _strchr - is a funtion that locates a character in a string
 * @s: the string being looped
 * @c: pointer to the first occurrence of the character c
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (char *) s;
		s++;
	}
	return (NULL);
}
