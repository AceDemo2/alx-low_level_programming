#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer to new memory
 *         NULL if it fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *p = ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(sizeof(char) * new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(sizeof(char) * new_size);
	if (a == NULL)
		return (NULL);
	while (i < old_size)
	{
		a[i] = p[i];
		i++;
	}
	free(ptr);
	return (a);
}
