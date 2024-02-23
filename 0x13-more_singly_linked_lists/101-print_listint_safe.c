#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t counter = 0;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        counter++;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);

            slow = head;
            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                counter++;
                slow = slow->next;
                fast = fast->next;
            }

            return counter;
        }
    }

    return counter;
}
