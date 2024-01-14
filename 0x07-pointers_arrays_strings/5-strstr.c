#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	char *r;

	while (haystack[i])
	{
		j = 0;
		r = &haystack[i];
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				j++;
				i++;
			}
			else
				break;
		}
		if (needle[j] == '\0')
			return(r);
		i++;
	}
	return (NULL);
}
