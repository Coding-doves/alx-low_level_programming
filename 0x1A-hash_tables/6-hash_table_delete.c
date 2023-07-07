#include "hash_tables.h"

/**
 * hash_table_delete - delete hashtable
 * @ht: hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr != NULL)
		{
			tmp = ptr->next;
			free_ptr(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
