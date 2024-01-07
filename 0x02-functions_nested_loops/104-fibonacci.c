#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k, l = 0;

	printf("%llu, %llu", i, j);
	while (l < 98)
	{
		k = i + j;
		printf(", %llu", k);
		i = j;
		j = k;
		l++;
	}
	printf("\n");
	return (0);
}
