#include "hash_tables.h"
/**
 * shash_table_gets - get table at index
 * @ht: hashtable
 * @key: key used to generate the index where our
 * key is located on the table
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	shash_node_t *f;

	if (ht == NULL)
		return (NULL);

	f = ht->array[idx];
	while (f != NULL)
	{
		if (strcmp(f->key, key))
			return (f->value);
		f = f->next;
	}

	return (NULL);
}

/**
 *  shash_table_print - print hash table
 *  @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, track = 0;
	shash_node_t *k;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size - 1; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (track)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

			track = 1;

			if (ht->array[i]->next != NULL)
			{
				k = ht->shead;
				while (k != NULL)
				{
					if (track)
						printf(", ");

					printf("'%s': '%s'", k->key, k->value);

					track = 1;

					k = k->snext;
				}
			}
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table in reverse order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i, track = 0;
	shash_node_t *k;

	if (ht == NULL)
		return;

	printf("{");

	for (i = ht->size - 1; i >= 1; i--)
	{
		if (ht->array[i] != NULL)
		{
			if (track)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

			track = 1;

			if (ht->array[i]->next != NULL)
			{
				k = ht->stail;
				while (k != NULL)
				{
					if (track)
						printf(", ");

					printf("'%s': '%s'", k->key, k->value);

					track = 1;

					k = k->sprev;
				}
			}
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		
		ptr = ht->array[i];
		
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
