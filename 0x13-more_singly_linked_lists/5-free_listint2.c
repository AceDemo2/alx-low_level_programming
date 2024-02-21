#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *i = *head, *j;

	if (*head == NULL || head == NULL)
		return;
	while (i)
	{
		j = i->next;
		free(i);
		i = j;
	}
	*head = NULL;
}
