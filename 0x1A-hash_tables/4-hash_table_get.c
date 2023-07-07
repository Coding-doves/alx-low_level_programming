#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *k;

	if (ht ==  NULL || key == NULL)
		return NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	k = ht->array[idx];

	if (k != NULL)
	{
		if (strcmp(k->key, key) == 0)
			return k->value;
	}
	return NULL;
}
