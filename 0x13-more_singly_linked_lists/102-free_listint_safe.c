#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *temp;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (count);

    slow = *h;
    fast = *h;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            /* Loop detected, break the loop */
            slow = *h;
            while (slow != fast)
            {
                temp = fast;
                fast = fast->next;
                count++;
                free(temp);
            }

            /* Set the last node in the loop to NULL */
            temp->next = NULL;

            /* Continue freeing the rest of the list */
            while (fast->next)
            {
                temp = fast->next;
                free(fast);
                fast = temp;
                count++;
            }

            /* Free the last node in the list */
            free(fast);
            count++;

            /* Set the head to NULL to indicate the list is freed */
            *h = NULL;
            return (count);
        }
    }

    /* No loop, free the entire list */
    while (*h)
    {
        temp = (*h)->next;
        free(*h);
        *h = temp;
        count++;
    }

    /* Set the head to NULL to indicate the list is freed */
    *h = NULL;

    return (count);
}

