#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins to make change.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly 1 - 1.
 *         If the argument is negative - 0.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int c = 0, cents;
	if (argc > 2)
	{
		printf("Error\n");
		return(1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 2)
				cents -= 2;
			else
				cents -= 1;
			c++;
		}
		printf("%d\n", c);
		return (0);
	}
}
