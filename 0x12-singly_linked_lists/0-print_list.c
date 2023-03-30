#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = NULL;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		count++;
		temp = temp->next;
	}
	return (count);
}
