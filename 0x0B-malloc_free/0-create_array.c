#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	int j = 0;

	if (size == 0)
		return (0);
	i = (char *)malloc(sizeof(char) * size);
	if (i == NULL)
		return (0);
	while (j < size - 1)
	{
		i[j] = c;
		j++;
	}
	return (i);
}
