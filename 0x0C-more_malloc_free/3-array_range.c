#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int i = 0, j = 0, *a;

	if (min > max)
		return (NULL);
	while (min <= max)
	{
		min++;
		i++;
	}
	a = malloc(sizeof(int) * (i + 1));
	if (a == NULL)
		return (NULL);
	while (j <= i)
	{
		a[j] = min;
		j++;
		min++;
	}
	return (a);
}
