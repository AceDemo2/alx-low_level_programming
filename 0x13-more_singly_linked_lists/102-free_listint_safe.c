#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    size_t size = 0;

    if (h == NULL || *h == NULL)
        return (size);

    while (*h != NULL)
    {
        size++;
        current = *h;
        *h = (*h)->next;

        /* Check if the current node has been visited before */
        if (current->next == current)
        {
            free(current);
            break;
        }

        /* Mark the current node as visited */
        current->next = current;

        /* Free the current node */
        free(current);
    }

    return (size);
}

