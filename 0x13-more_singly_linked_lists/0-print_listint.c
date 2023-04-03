#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t nodes = 0;

	if (h == NULL)
		return (-1);
	else
	{
		ptr = h;
		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->next;
			nodes++;
		}
	}
	return (nodes);
}
