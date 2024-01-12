#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: pointer to the resulting `dest` string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < n && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	while (dest[j])
		j++;
	dest[j] = '\0';
	return (dest);
}
