#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i,j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar((i * j) + '0');
			if (i == 9 && j == 9)
				break;
			_putchar(',');
			if (j == 9)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
