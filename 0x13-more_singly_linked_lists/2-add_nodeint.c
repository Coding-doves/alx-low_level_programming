#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the address of head pointer that points to the first node
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}