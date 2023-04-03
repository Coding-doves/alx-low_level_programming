#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first node
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;
	int nodes = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if  (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}
	ptr->next = new;
	return (new);
}
