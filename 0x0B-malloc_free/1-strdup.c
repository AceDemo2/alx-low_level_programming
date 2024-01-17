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
	char *j = str, *i;
	int n = 0;

	if (str == NULL)
		return (NULL);
	while(*j)
	{
		n++;
		j++;
	}
	i = malloc(sizeof(char) * (n + 1));
	if (i == NULL)
		return (NULL);
	while (*str)
	{
		*i = *str;
		i++;
		str++;
	}
	*i = '\0';
	return (i);
}
