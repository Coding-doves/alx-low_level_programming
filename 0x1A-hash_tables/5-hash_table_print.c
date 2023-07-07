#include "hash_tables.h"
/**
 * hash_table_print - print hashtable
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, track = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i]  != NULL)
		{
			if (track)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			track = 1;
		}
	}
	printf("}\n");
}
