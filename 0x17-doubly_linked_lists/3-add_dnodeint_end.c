#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i = *head, *j;

	j = malloc(sizeof(dlistint_t));
	if (j == NULL)
		return (NULL);
	j->next = NULL;
	if (*head == NULL)
		j->prev = *head;
	else
	{
		while (i->next)
			i = i->next;
		j->prev = i;
		i->next = j;
	}
	return (j);
}
