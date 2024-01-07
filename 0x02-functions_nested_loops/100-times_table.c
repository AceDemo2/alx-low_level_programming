#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (k > 9 && k < 100)
						_putchar(' ');
					else if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				if (k > 9 && k < 100)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 99)
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
					_putchar(k + '0');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}		

