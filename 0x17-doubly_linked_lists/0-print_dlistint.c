#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *j = h;

	while (j)
	{
		printf("%d\n", j->n);
		i++;
		j = j->next;
	}
	return (i);
}
