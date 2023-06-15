#include "lists.h"
/**
 * print_dlistint - print nodes
 * @h: head of list passed
 * Return: the number of nodes
 * Description: the function prints node in a doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	 const dlistint_t *tmp;
	 size_t i = 0;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}

	return (i);
}
