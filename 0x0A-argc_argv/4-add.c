#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		return (0);
}

