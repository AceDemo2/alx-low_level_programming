#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i = *head, *k = *head;
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);
	while (i)
	{
		i = i->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	j = 0;
	if (idx == 0)
	{
		i->next = *head;
		*head = i;
		return (i);
	}
	while (k && j < idx - 1)
	{
		k = k->next;
		j++;
	}
	if (k == NULL)
	{
		free(i);
		return (NULL);
	}
	i->next = k->next;
	k->next = i;
	return (i);
}

