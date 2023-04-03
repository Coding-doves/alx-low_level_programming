#include "lists.h"

/**
 * listint_len - function that number of elements in a listint_t list
 * @h: pointer to first node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
