#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j, k = 0, l = 0, s = size - 1;

	while(i <= size && s >= 0)
	{
			
		k += a[i];
		i++;
		l += a[s]
		s--;
	}
	printf("
}

