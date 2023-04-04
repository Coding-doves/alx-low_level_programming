#include "lists.h"

/**
 * print_listint_safe - prints a linked list and can print lists with a loop
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *slow = head, *fast = head;
        return (0);

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
            exit(98);
        }
    }

    /* Print the remaining nodes if there is no loop */
    while (head != NULL)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        head = head->next;
    }

    return (count);
}
