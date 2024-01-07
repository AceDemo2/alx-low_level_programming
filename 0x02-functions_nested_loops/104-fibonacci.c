#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(voin)
{
	long int i = 1, j = 2, k, l = 0;

	printf("%ld, %ld", i, j);
	while (l < 98)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
		l++;
	}
	printf("\n");
}
