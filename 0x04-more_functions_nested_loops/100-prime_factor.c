#include <stdio.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	long int i, j = 612852475143, k = 0;

	for (i = 2; i <= j; i++)
	{
		while (j % i == 0)
		{	
			j /= i;
			if (i > k)
				k = i;
		}

	}
	printf("%ld\n", k);
	return (0);
}
