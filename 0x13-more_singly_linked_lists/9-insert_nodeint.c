#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: position
 * @n: new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;

	if (head == NULL)
		return (NULL);

	ptr = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	while (idx != 1)
	{
		if (ptr != NULL)
			ptr = ptr->next;
		else
		{
			free(new);
			return (NULL);
		}
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
