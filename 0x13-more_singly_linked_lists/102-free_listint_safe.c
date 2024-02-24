#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h, *next_node;
    size_t size = 0, i;
    int loop_detected = 0;

    if (*h == NULL)
        return (0);

    while (current != NULL)
    {
        size++;

        next_node = current->next;

        /* Check for a loop */
        for (i = 0; i < size; i++)
        {
            if (next_node == (*h + i))
            {
                loop_detected = 1;
                break;
            }
        }

        if (loop_detected)
        {
            /* Free the nodes up to the one causing the loop */
            current->next = NULL;
            for (i = 0; i < size; i++)
            {
                next_node = (*h)->next;
                free(*h);
                *h = next_node;
            }
            break;
        }

        /* No loop, free the current node */
        free(current);
        current = next_node;
    }

    /* Set the head to NULL to indicate the list is freed */
    *h = NULL;

    return (size);
}

