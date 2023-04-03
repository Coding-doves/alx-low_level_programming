#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	head = NULL;
}
