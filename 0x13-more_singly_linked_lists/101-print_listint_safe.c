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
		return (0);

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		num++;
		ptr = ptr->next;

		if (ahead && ahead->next)
		{
			ahead = ahead->next->next;
			if (ptr == ahead)
			{

				ahead = head;
				if (ptr->next != ahead->next)
				{
					printf("[%p] %d\n", (void *)ptr, ptr->n);
					num++;
					ptr = ptr->next;
					ahead = ahead->next;
				}
				printf("[%p] %d\n", (void *)ptr, ptr->n);
				printf("->[%p] %d\n", (void *)ptr->next, ptr->next->n);
				exit(98);
			}
		}
	}

	return (num);
}
