#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}
