#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to first list
 * @str: new node to add at the begining of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	if (head == NULL || str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
		return (NULL);

	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
