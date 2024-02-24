#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head, *j;

	while (i)
	{
		i = i->next;
		j = head;
		while (j != i)
		{
			if (i = j)
				return (i);
			j = j->next;
			l++;
		}
	}
	return (NULL);
}
