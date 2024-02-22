#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i = head;
	unsigned int j = 0;

	while (i)
	{
		i = i->next;
		j++;
	}
	if (index >= j)
		return (NULL);
	i = head;
	j = 0;
	while (j < index)
	{
		i = i->next;
		j++;
	}
	return (i);
}
