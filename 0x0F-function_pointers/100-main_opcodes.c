#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(ac, *av[])
{
	char *i = main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
        }
	while (j < (av[1] - 1))
	{
		printf("%02x ", i[j]);
		j++;
	}
	printf("%02x", i[j]);
	return (0);
}
