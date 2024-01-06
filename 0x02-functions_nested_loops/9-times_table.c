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

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (k < 10)
				{
					_putchar(' ');
				}
			}

			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			j++;
		}

		_putchar('\n');
		i++;
	}
}

