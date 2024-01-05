#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 8)
	{
		j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
