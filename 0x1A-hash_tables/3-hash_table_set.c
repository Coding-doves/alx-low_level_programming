#include "hash_tables.h"
/**
 * free_ptr - free nodes
 * @ptr: mode to free
 */
void free_ptr(hash_node_t *ptr)
{
	free(ptr->key);
	free(ptr->value);
	free(ptr);
}

/**
 * hash_table_set - add element to hash table
 * @ht:  hash table you want to add or update the key/value to
 * @key: key
 * @value: pair
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *ptr = malloc(sizeof(hash_node_t)), *upd;

	if (ptr == NULL || key == NULL || ht == NULL)
		return (0);

	if (strcmp(key, "") == 0 || strcmp(value, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	ptr->key = strdup((char *)key);
	ptr->value = strdup((char *)value);
	ptr->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = ptr;
	}
	else
	{
		upd = ht->array[idx];
		while (upd != NULL)
		{
			if (strcmp(upd->key, key) == 0)
			{
				free(upd->value);
				upd->value = strdup(value);
				free_ptr(ptr);
				return (1);
			}
			upd = upd->next;
		}

		ptr->next = ht->array[idx];
		ht->array[idx] = ptr;
	}
	return (1);
}
