#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list.
 * @head: pointer to first node
 * @index: position of node
 * Returns the nth node or null if node does exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;

	if (index == 1)
		return (head);
	while (index != 0)
	{
		if (ptr != NULL)
			ptr = ptr->next;
		else
			return (NULL);
		index--;
	}
	return (ptr);
}
