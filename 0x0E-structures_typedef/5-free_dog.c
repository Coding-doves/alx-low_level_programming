#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: type name
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	return;
}
