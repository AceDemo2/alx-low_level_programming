#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;
			if (k == 0)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (k >= 10)
			{
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			if (j == 9)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
