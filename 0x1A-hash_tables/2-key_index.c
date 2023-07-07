#include  "hash_tables.h"
/**
 * key_index - get the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: key at index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int idx = hash % size;

	return (idx);
}
