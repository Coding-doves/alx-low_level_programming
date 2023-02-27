#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @str: string
 * Return: 0
 */

size_t  _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
