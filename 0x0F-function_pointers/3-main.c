#include "3-calc.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int (*i)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
        	exit(98);
	}
	i = get_op_func(argv[2]);
	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", i(atoi(argv[1]), atoi(argv[3]))); 
	return (0);
}
