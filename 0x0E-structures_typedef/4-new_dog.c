#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: dog details or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;
	int i, j, cp, cp2;

	copy = malloc(sizeof(dog_t));

	if (copy == NULL)
	{
		return (NULL);
	}
	copy->name = name;
	copy->age = age;
	copy->owner = owner;

	/* to get the length of name and owner*/
	for (i = 0; i < name[i]; i++)
		;

	for (j = 0; j < owner[j]; j++)
		;

	copy->name = malloc(sizeof(i + 1));
	copy->owner = malloc(sizeof(j + 1));

	if ((copy->name == NULL) || (copy->owner == NULL))
	{
		free(copy->name);
		free(copy->owner);
			free(copy);
		return (NULL);
	}

	for (cp = 0; cp < i; cp++)
		copy->name[i] = name[i];
	copy->name[i] = '\0';

	for (cp2 = 0; cp2 < j; cp2++)
		copy->owner[j] = owner[j];
	copy->owner[j] = '\0';

	return (copy);
}
