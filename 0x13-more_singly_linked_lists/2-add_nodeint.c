#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = n;
	return (n);
}
