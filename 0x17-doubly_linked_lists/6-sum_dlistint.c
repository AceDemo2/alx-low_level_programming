#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *j = head;

	while (j)
	{
		i += j->n;
		j = j->next;
	}
	return (i);
}
