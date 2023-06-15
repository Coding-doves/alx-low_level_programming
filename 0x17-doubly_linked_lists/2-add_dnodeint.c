#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: head of list
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
 * Decription: adds a new node at the beginning of a dlistint_t list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	
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
		tmp->next = (*head);
		(*head)->prev = tmp;
		(*head) = tmp;
	}
	return (tmp);
}
