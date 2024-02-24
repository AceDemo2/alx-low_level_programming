#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i = head, *j;
	size_t k = 0, l;

	while (i)
	{
		printf("[%p] %d\n", (void *)i, i->n);
		i = i->next;
		k++;
		j = head;
		l = 0;
		while (l < k)
		{
			if (i == j)
			{
				printf("-> [%p] %d\n", (void *)i, i->n);
				return (k);
			}
			j = j->next;
			l++;
		}
	if (head == NULL)
		exit(98);
	}
	return (k);
}
