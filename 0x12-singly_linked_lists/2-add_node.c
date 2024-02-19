#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 * Return: Address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strup(str);
	if (n->str == NULL)
		return (NULL);
	n->len = (strlen(str));
	n->next = *head;
	*head = n;
	return (n);
}	
