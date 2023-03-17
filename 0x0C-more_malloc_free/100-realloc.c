#include "main.h"
#include <stdio.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * @ptr: is a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * Return:
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr == NULL)
		return (NULL);
	
	ptr = malloc(ptr, sizeof(unsigned int) * new_size);

	free(ptr);
	return;
}
