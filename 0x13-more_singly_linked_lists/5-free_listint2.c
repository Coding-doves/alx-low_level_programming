#include "lists.h"
#include <unistd.h>

/**
 * free_listint2 - frees list and sets head to null
 * @head: pointer to first node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
