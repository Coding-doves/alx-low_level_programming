#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data (n).
 * @head: pointer to first node
 * Return: data(n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int node = 0;
	int tem = 0;

	if (head == NULL)
		return (0);

	if (*head == NULL)
	{
		return (0);
	}

	while (*head != NULL)
	{
		ptr = (*head)->next;
		tem = (*head)->n;
		free(*head);
		*head = ptr;
		node++;
	}
	return (tem);
}
