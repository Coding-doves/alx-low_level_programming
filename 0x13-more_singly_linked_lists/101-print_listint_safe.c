#include "lists.h"

/**
 * print_listint_safe - prints a linked list and can print lists with a loop
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head->next;

    while (fast != NULL && fast < slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
    }

    printf("[%p] %d\n", (void *)slow, slow->n);
    count++;

    if (fast != NULL)
    {
        printf("-> [%p] %d\n", (void *)fast, fast->n);
        count++;
    }

    return (count);
}
