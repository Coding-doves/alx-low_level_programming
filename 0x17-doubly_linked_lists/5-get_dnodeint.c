#include "lists.h"
/**
 * get_dnodeint_at_index - get node at nth position
 * @head: start of list
 * @index: position of nth node
 * Return: the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	 unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr && ptr->next)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}

	if (i == index && ptr->next == NULL)
		return (ptr);

	return (NULL);
}
