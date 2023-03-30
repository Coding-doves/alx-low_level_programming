#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
