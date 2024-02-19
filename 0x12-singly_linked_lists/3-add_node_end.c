#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 * Return: Address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n *temp;
	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
		*head = n;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
	temp->next = n;
	}
	return (n);
}
