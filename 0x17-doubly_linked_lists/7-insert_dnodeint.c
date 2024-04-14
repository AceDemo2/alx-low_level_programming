#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i = *h, *j;
	
	j = malloc(sizeof(dlistint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	while (idx > 1 && i)
	{
		i = i->next;
		idx--;
	}
	if (!i)
	{
		free(j);
		return (NULL);
	}
	j->next = i->next;
	j->prev = i;
	i->prev->next = j;
	i->next = j;
	return (j);
}
