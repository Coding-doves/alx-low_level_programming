#include "main.h"

/**
 * _strlen - length of a string
 * @str: string
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
		s++;
	return (length);
}
