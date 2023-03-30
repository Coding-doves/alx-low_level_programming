#include "lists.h"

/**
 * list_len - function that returns num of elements in a linked list_t list.
 * @h: pointer to first node
 * Return: len of list
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
