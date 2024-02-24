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
	listint_t *i = head, *j = head;

	while (i && i->next)
	{
		i = i->next->next;
		j = j->next;
		if (i == j)
		{
			j = head;
			while (j != i)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
