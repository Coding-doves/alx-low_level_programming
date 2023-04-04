#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to first node
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}

	del = *head;
	while (index != 0)
	{
		if (del->next != NULL)
		{
			ptr = del;
			del = del->next;
		}
		else
			return (-1);
		index--;
	}
	ptr->next  = del->next;
	free(del);
	return (1);
}
