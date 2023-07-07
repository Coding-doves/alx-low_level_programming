#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
hash_table_t *ht;
char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "redescribed", "urites");
	hash_table_set(ht, "dram", "vivency");

	value = hash_table_get(ht, "betty");
	printf("%s:%s\n", "betty", value);
	value = hash_table_get(ht, "depravement");
	printf("%s:%s\n", "depravement", value);
	value = hash_table_get(ht, "heliotropes");
	printf("%s:%s\n", "heliotropes", value);
	value = hash_table_get(ht, "stylist");
	printf("%s:%s\n", "stylist", value);
	value = hash_table_get(ht, "joyful");
	printf("%s:%s\n", "joyful", value);
	value = hash_table_get(ht, "redescribed");
	printf("%s:%s\n", "redescribed", value);
	value = hash_table_get(ht, "dram");
	printf("%s:%s\n", "dram", value);
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\n", "hetairas", value);
	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
	return (EXIT_SUCCESS);
}
