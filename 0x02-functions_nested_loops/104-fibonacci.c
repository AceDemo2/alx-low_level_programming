#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k = 0, l = 0;

	printf("%lu, %lu", i, j);
	while (l < 98)
	{
		k = i + j;
		printf(", %lu", k);
		i = j;
		j = k;
		l++;
	}
	printf("\n");
	return (0);
}
