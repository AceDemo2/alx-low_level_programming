#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, l = 3;
	long int k;

	printf("%d, %d", i, j);
	while (l <= 50)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
		l++;
	}
	printf("\n");
	return (0);
}
