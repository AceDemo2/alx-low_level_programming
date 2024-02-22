#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *i = *head;
	int j;
	
	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	j = i->n;
	free(i);
	return (j);
}
