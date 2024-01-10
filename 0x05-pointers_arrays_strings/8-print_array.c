#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * Owned by Bwave
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int i = 0, j = 0;

	while (a[i])
		i++;
	while (a[j] != a[i - 1])
	{
		printf("%d, ",a[j]);
		j++;
	}
	printf("%d\n", a[j]);
}
