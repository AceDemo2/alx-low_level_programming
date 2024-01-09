#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	long i, j = 612852475143;

	for (i = 2; i <= j; i++)
	{
		while (j % i == 0)
			j /= i;
	}
	printf("%ld\n", j);
	return (0);
}
