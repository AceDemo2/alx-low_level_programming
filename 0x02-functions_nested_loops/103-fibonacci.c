#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i = 1, j = 2, k, l = 0, se = 2;

	while (k <= 4000000)
	{
		k = i + j;
		if ((k % 2) == 0)
			se += k;
		i = j;
		j = k;
		l++;
	}
	printf("%ld\n", se);
	return (0);
}



