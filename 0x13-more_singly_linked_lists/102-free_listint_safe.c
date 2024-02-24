#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *i;
	size_t k = 0, l = sizeof(listint_t), m;

	if (h == NULL || *h == NULL)
		return (k);
	while (*h)
	{
		i = (*h)->next;
		free(*h);
		*h = i;
		k++;
		m = sizeof(i);
		if (l != m)
			break;	
	}
	return (k);
}
