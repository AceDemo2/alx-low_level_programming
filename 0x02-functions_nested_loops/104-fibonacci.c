#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k, k1, k2, i1, j1, i2, j2, l = 0;

	printf("%lu, %lu", i, j);
	while (l < 89)
	{
		k = i + j;
		printf(", %lu", k);
		i = j;
		j = k;
		l++;
	}
	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	while (l < 96)
	{
		k1 = i1 + j1;
		k2 = i2 + j2;
		printf(", %lu", k1);
		printf("%lu", k2);
		i1 = j1;
		i2 = j2;
		j1 = k1;
		j2 = k2;
		l++;
	}
	printf("\n");
	return (0);
}
