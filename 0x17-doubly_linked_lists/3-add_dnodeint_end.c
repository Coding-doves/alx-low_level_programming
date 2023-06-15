#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: head of list
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *tail;

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = tmp;
	}
	else
	{
		tail = (*head);
		while (tail->next != NULL)
			tail = tail->next;
		tmp->prev = tail;
		tail->next = tmp;
		tail = tmp;
	}

	return (tmp);
}
