#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(char ac, char *av[])
{
	char *i = (char *) main;
	int j = 0;

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
	while (j < atoi(av[1]) - 1)
	{
		printf("%02x ", i[j]);
		j++;
	}
	printf("%02x\n", i[j]);
	return (0);
}
