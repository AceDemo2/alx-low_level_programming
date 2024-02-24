#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow = *h, *fast = *h;
    size_t nodes_freed = 0;

    /* Detect the loop using Floyd's algorithm */
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (!fast || !fast->next)
    {
        /* No loop, simply free the list */
        while (*h)
        {
            listint_t *temp = *h;
            *h = temp->next;
            free(temp);
            nodes_freed++;
        }
    }
    else
    {
        /* Loop detected, free the looped part */
        slow = *h;
        while (slow != fast)
        {
            listint_t *temp_slow = slow;
            slow = slow->next;
            free(temp_slow);
            nodes_freed++;
        }
    }

    *h = NULL; /* Set the head to NULL after freeing */

    return nodes_freed;
}

