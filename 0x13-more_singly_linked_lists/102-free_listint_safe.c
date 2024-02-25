#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *i = *h, *j = *h, *l;
	size_t k = 0;

	if (h == NULL || *h == NULL)
		return (k);
	while (j && j->next)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
		{
			i = *h;
			while (i->next != j->next)
			{
				l = j;
				i = i->next;
				j = j->next;
				free(l);
				k++;
			}
			break;
		}
	}
	while (*h)
	{
		l = (*h)->next;
		free(*h);
		*h = l;
		k++;
	}
	*h = NULL;
	return (k);
}
