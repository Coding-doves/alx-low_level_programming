#include "hash_tables.h"
/**
 * shash_table_create - create hash table
 * @size: size of table tobe created
 * Return:
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t tabl = (shash_table_t *)malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (tabl == NULL)
		return (NULL);

	tabl->size = size;
	tabl->array = malloc(sizeof(shash_node_t *) * size);
	tabl->shead = NULL;
	tabl->stail = NULL;
	if (tabl->array == NULL)
		return (NULL);

	for (i = 0; i < tabl->size; i++)
		tabl->array[i] = NULL;

	return (tabl);
}

/**
 * sh - sorted hash table
 * @ht: hash table
 * @key: key
 * @value: pair
 * Return: 0 on fail or 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, idx;
	shash_node_t *pt = (shash_node_t *)malloc(sizeof(shash_node_t));

	if (key == NULL || value == NULL)
		return 0;
	if (strcmp(*key, "") == 0 || strcmp(*value, "") == 0)
		return 0;

	idx = key_index((const unsigned char *)key, ht->size);
	pt->key = key;
	pt->value = value;
	pt->next = NULL;
	pt->sprev = NULL;
	pt->snext = NULL;

	/*insert list in their index*/
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = pt;
	}
	else
	{
		shash_node_t *tmp;

		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if(strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(ptr->value);
				free_ptr(ptr);
				return (1);
			}
			tmp = tmp->next;
		}
		pt->prev = ht->array[idx]->prev;
		pt->next = ht->array[idx];
		ht->array[idx] = pt;

		sort_list(ht, idx);
	}
	return (1);
}

/**
 * sort_list - sort of collision
 * @ht
 * Return:
 */
shash_node_t sort_list(shash_table_t *ht, unsigned long int idx)
{
	if (ht == NULL)
		return NULL;

	if (ht->array[idx] != NULL)
	{
		if (ht->array[idx]->next != NULL)
		{
			while ()
		}	
		sot = ht->array[i];
		for (j = i - 1; )
		{
			ht->array[i + j] = ht->array;
		}
		ht->array[i + j] = sot
	}
return (new);	
}
