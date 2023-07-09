#include "hash_tables.h"
/**
 * shash_table_create - create hash table
 * @size: size of table tobe created
 * Return:
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tabl = (shash_table_t *)malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (tabl == NULL)
	{
		free(tabl);
		return (NULL);
	}

	tabl->size = size;
	tabl->array = malloc(sizeof(shash_node_t *) * size);
	tabl->shead = NULL;
	tabl->stail = NULL;

	if (tabl->array == NULL)
	{
		free(tabl->array);
		return (NULL);
	}

	for (i = 0; i < tabl->size; i++)
		tabl->array[i] = NULL;

	return (tabl);
}

/**
 * shash_table_set - sorted hash table
 * @ht: hash table
 * @key: key
 * @value: pair
 * Return: 0 on fail or 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *pt = (shash_node_t *)malloc(sizeof(shash_node_t));

	if (ht == NULL || key == NULL || *key == '\0' || pt == NULL)
	{
		free(pt);
		return  (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	pt->key = strdup((char *)key);
	pt->value = strdup((char *)value);
	pt->next = NULL;
	pt->sprev = NULL;
	pt->snext = NULL;
	/*insert list in their index sorted order*/
	if (ht->array[idx] == NULL)
	{ /*set shead and tail pointing to first and lst*/
		ht->array[idx] = pt;
		ht->shead = pt;
		ht->stail = pt;
	}
	else
	{
		shash_node_t *f = ht->array[idx];
		while (f != NULL)
		{
			if (strcmp(f->key, key) == 0)
			{
				free(f->value);
				f->value = strdup(key);
				free(pt->value);
				free(pt->key);
				free(pt);
				return (1);
			}
			f = f->next;
		}
	}
	sort_list(ht, pt);
	return (1);
}

/**
 * sort_list - sort hash table
 * @ht: hash table
 * @pt: new node
 */
void sort_list(shash_table_t *ht, shash_node_t *pt)
{
	shash_node_t *tmp, *buf;

	tmp = NULL;
	buf = ht->shead;

	while (buf != NULL)
	{
		if (strcmp(buf->key, pt->key) > 0)
			break;

		tmp = buf;
		buf = buf->next;
	}

	if (tmp == ht->shead)
	{
		pt->snext = ht->shead;
		ht->shead->sprev = pt;
		ht->shead = pt;
	}
	else if (tmp == NULL)
	{
		pt->sprev = ht->stail;
		ht->stail->snext = pt;
		ht->stail = pt;
	}
	else
	{
		pt->sprev = tmp->sprev;
		tmp->sprev->next = pt;
		pt->snext = tmp;
		tmp->sprev = pt;
	}
}
