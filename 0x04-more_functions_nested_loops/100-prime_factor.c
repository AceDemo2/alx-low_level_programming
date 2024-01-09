#include <stdio.h>

/**
 * main - Finds the largest prime factor of a given number
 *
 * Return: Always 0
 */
int main(void)
{
	long factor = 2;
	long num = 612852475143;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", factor);

	return (0);
}
