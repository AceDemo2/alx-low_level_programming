#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *i = head, *j;

	while (i)
	{
		j = i->next;
		free(i->str);
		free(i);
		i = j;
	}
}
