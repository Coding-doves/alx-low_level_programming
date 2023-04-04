#include "lists.h"

/**
 * print_listint_safe - prints a linked list and can print lists with a loop
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *ptr = head;

	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		num++;

		if (ptr > ptr->next)
			ptr = ptr->next;
		else
		{
			printf("-> [%p] %d\n", (void *) ptr->next, ptr->next->n);
			exit(98);
		}
	}

	if (ptr == NULL)
		return (num);
	return (num);
}
