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

	while (*h != NULL)
	{
		ptr = *h;
		*h = ptr->next;
		free(ptr);
		size++;

		if (*h >= ptr)
			break;
	}
	*h = NULL;
	return (size);
}
