#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **i, j = 0, k;

	if (width == 0 || height == 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
		return (NULL);
	while (j < height)
	{
		i[j] = malloc(sizeof(int) * width);
		if (i[j] == NULL)
		{
			k = 0;
			while (i[k])
			{
				free(i[k]);
				k++;
			}					
			free(i);		
			return (NULL);
		}
		k = 0;
		while (k < width)
		{
			i[j][k] = 0;
			k++;
		}
		j++;
	}
	return (i);
}

			
