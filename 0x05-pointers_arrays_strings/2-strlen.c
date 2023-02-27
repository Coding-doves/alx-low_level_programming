#include "main.h"

/**
 * _strlen - length of a string
 * Return: 0
 */

size_t  _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
