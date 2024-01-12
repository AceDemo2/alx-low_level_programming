#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
	       dest[i] = src[j];
	       i++;
	       j++;
	}
	dest[i] = '\0';
	return (dest);
}
