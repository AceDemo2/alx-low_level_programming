#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *i = str;
	int n = 0;

	if (str == NULL)
		return (NULL);
	while(*i)
	{
		n++;
		i++;
	}
	*i = *str;
	i = malloc(sizeof(char) * n);
	if (i == NULL)
		return (NULL);
	while (*str)
	{
		*i = *str;
		i++;
		str++;
	}
	return (i);
}
