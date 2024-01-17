#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *i;
	int k = 0, n = 0;

	while (s1[n])
		n++;
	while (s1[j])
		j++;
	i = malloc(sizeof(char) * (n + j + 1));
	if (i == NULL)
		return (NULL);
	while (*s1)
	{
		i[k] = *s1;
		k++;
		s1++;
	}
	while (*s2)
	{
		i[k] = *s2;
		k++;
		s2++;
	}
	i[k] = '\0';
	return (i);
}
