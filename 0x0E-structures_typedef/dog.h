#ifndef DOGTYPE
#define DOGTYPE

/**
 * struct dog - Define a new type
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
