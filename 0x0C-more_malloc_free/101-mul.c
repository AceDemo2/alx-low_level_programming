#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int ac, char **av)
{
	unsigned long mul;
	int i = 1, j;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		i++;
	}
	mul = atol(av[1]) * atol(av[2]);
	printf("%lu\n", mul);
	return (0);
}
