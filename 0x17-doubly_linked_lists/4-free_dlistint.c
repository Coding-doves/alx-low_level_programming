#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: start of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		tmp->next = NULL;
		free(tmp);

	}
}
