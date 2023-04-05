#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list and free lists with a loop
 * @h: pointer to head list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return (0);

	ptr = *h;
	while (*h != NULL)
	{
		size++;
		*h = ptr->next;
		free(ptr);
		ptr = NULL;
		if ((*h)->next >= ptr)
			break;
		ptr = *h;
	}
	*h = NULL;
	return (size);
}
