#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *i = *h, *j;
	size_t k = 0, l;

	if (h == NULL || *h == NULL)
		return (k);
	while (*i)
	{
		i = i->next;
		k++;
		j = *h;
		l = 0;
		while (l < k)
		{
			if (i == j)
				break;
			j = j->next;
			l++;
		}
		if (i == j)
			break;
	}
	l = 0;
	while (l < k)
	{
		i = (*h)->next;
		free(*h);
		*h = i;
		l++;
	}
	return (k);
}
