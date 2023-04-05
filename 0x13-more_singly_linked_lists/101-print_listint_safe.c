#include "lists.h"

/**
 * print_listint_safe - prints a linked list and can print lists with a loop
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *ahead = head;
	size_t num = 0;

	if (head == NULL)
		return(0);

	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		num++;

		if (ahead != NULL && ahead->next != NULL)
		{
			ahead = ahead->next->next;

			if (ptr == ahead)
			{
				ahead = head;
				if (ptr != ahead)
				{
					ptr = ptr->next;
					ahead = ahead->next;
				}
				printf("->[%p] %d\n", (void *)ptr->next, ptr->next->n);
				exit(98);
			}
		}
	}

	return (num);
}
