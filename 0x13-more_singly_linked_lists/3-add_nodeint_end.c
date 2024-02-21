#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (i);
	i->n = n;
	if (*head == NULL)
	{
		i->next = *head;
		*head = i;
	}
	else
	{
		j = *head;
		while(j->next)
			j = j->next;
		i->next = j->next;
		j->next = i;
	}
	return (i);
}
