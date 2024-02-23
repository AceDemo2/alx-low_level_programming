#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head, *k;
	unsigned int j = 0;

	if (index == 0)
	{
		*head = i->next;
		free(i);
		return (1);
	}
	while (j < index - 1 && i)
	{
		i = i->next;
		j++;
	}
	if (i == NULL || i->next == NULL)
		return (-1);
	k = i->next;
	i->next = k->next;
	free(k);
	return (1);
}
