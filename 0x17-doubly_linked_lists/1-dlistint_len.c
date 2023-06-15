#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: head of lists
 * Return: the number of elements
 * Decription: returns the number of elements in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i = 0;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}

	return (i);
}
