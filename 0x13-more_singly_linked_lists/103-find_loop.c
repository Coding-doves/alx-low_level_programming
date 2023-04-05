#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor = head, *hare = head;

	while (tor != NULL && hare != NULL && hare->next != NULL)
	{
		tor = tor->next;
		hare = hare->next->next;

		if (tor == hare)
		{
			hare = head;
			while (tor != hare)
			{
				tor = tor->next;
				hare = hare->next;
			}
			return (tor);
		}
	}
	return (NULL);
}

