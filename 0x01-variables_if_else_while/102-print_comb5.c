#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * Combination of numbers must be separated by a comma followed by a space.
 * Combinations of numbers should be printed in ascending order.
 * `00 01` and `01 00` are considered as the same combination.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 8 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
				j++;
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

