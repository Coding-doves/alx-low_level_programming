#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: start of list
 * @index: position of delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *ptr;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);
	
	tmp = (*head);
	if (index == 0)
	{
		(*head) = tmp->next;
		tmp->next = NULL;
		free(tmp);
	}

	ptr = (*head);
	while (tmp && tmp->next && ptr && ptr->next)
	{
		i++;
		if (i == index)
		{
			ptr = ptr->prev;
			ptr = tmp->next;
			tmp->next->prev = ptr;
			tmp->next = NULL;
			tmp->prev = NULL;
			free(tmp);
			break;
		}
		tmp = tmp->next;
	}

	if (i == index && tmp->next == NULL && ptr->next == NULL)
	{
		ptr = ptr->prev;
		ptr->next = NULL;
		tmp->prev = NULL;
		free(tmp);
	}
	return (1);
}
