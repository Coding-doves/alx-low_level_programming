#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(nmemb) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ptr[i]; i++)
		ptr[i] = 0;

	return (ptr);
}
