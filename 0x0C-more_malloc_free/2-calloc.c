#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(sizeof(char) * (size * nmemb));
	if (a == NULL)
		return (NULL);
	while (i < (size * nmemb))
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
