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

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(i);
		return (1);
	}
	while (i && index)
	{
		i = i->next;
		index--;
	}
	if (!i)
		return (-1);
	if (i->next == NULL)
	{
		i->prev->next = NULL;
		free(i);
		return (1);
	}
	i->prev->next = i->next;
	i->next->prev = i->prev;
	free(i);
	return (1);
}
