#include "hash_tables.h"
/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: to hash
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		/*each char is coverted to ascii value when stored in c*/
		/* then hash is multiplied by 32 + hash + char in c*/
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
