#include "hash_tables.h"
/**
 * hash_table_create - creating a hash table
 * @size: size of our table
 * Return: new table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tabl = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (tabl == NULL)
		return NULL;

	tabl->size = size;

	return (tabl);
}
