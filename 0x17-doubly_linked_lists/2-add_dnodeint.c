#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *j;

	j = malloc(sizeof(dlistint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	if (*head == NULL)
	{
		j->next = NULL;
		j->prev = NULL;
		*head = j;
	}
	else
	{
		j->next = *head;
		(*head)->prev = j;
		j->prev = NULL;
		*head = j;
	}
	return (j);
}
