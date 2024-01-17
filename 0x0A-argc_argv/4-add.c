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
        int i, sum = 0, j;

        if (argc > 1)
        {
                i = 1;
                while (argv[i])
                {
			j = 0;
			while (argv[i][j])
			{
                        	if (argv[i][j] - '0' >= 0 && argv[i][j] - '0' <= 9)
                        	{
        	                        j++;
                	        }
                 	        else
                        	{
                               		printf("Error\n");
                                	return (1);
                        	}
                	}
			sum += atoi(argv[i]);
			i++;
		}
                printf("%d\n", sum);
                return (0);
        }
        else
        {
                printf("0\n");
                return (0);
        }
}
