#include "main.h"
#include "stdio.h"
/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (a[i][j])
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		j++;
	}
}
