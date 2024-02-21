#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/
void free_listint(listint_t *head)
{
	listint_t *i = head, *j;

	while (i)
	{
		j = i->next;
		free(i);
		i = j;
	}
}
