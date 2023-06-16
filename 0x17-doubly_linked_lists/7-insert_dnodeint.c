#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: head of list
 * @idx: index to insert node
 * @n: node to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *tmp = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next  = NULL;
	
	if (idx == 0)
	{
		if ((*h) == NULL)
			(*h) = tmp;
		else
		{
			tmp->next = (*h);
			(*h)->prev = tmp;
			(*h) = tmp;
		}
	}

	ptr = (*h);
	while (ptr && ptr->next)
	{
		i++;
		if (i == idx)
		{
			tmp->next = ptr->next;
			ptr->next->prev = tmp;
			if (ptr->next != NULL)
				ptr->next->prev = tmp;
			tmp->prev = ptr;
			ptr->next = tmp;
			break;
		}
		ptr = ptr->next;
	}
	if (i == idx && ptr->next == NULL)
	{
		tmp->prev = ptr;
		ptr->next = tmp;
	}

	return (tmp);
}
