#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of nodes or nil if empty
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = NULL;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);

		count++;
		temp = temp->next;
	}
	return (count);
}
