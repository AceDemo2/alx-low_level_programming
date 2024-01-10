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
	int i = 0;

	if (n <= 0)
		printf("\n");
	else
	{
		while (i < n - 1)
		{
			printf("%d, ",a[i]);
			i++;
		}
		printf("%d\n", a[j]);
	}
}
