#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head;

	while (i && index)
	{
		i = i->next;
		index--;
	}
	if (!i || index < 0)
		return (-1);
	i->prev->next = i->next;
	i->next->prev = i->prev;
	free(i);
	return (1);
}
