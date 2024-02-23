#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j = NULL;
	
	while (*head != NULL)
	{
		i = *head->next;
		*head->next = j;
		j = *head;
		*head = i;
	}
	*head = j;
	return (*head);
}
