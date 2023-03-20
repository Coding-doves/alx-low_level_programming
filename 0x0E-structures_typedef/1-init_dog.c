#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @struct dog *d: structure type
 * @name: of dog
 * @age: of dog
 * @owner: of owner
 * Return: dog details or nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
