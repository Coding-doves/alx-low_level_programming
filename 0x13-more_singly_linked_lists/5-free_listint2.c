#include "lists.h"

/**
 * free_listint2 - frees list and sets head to null
 * @head: pointer to first node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(head);
		*head = ptr;
	}
	*head = NULL;
}
