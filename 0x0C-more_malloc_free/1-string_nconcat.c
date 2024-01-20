#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	a = malloc(sizeof(char) * (i + n + 2));
	if (a == NULL)
		return (NULL);
	while(*s1)
	{
		a[k] = *s1;
		k++;
		s1++;
	}
	while(l < n)
	{
		a[k] = *s2;
		k++;
		s2++;
		l++;
	}
	a[k] = '\0';
	return (a);
}
