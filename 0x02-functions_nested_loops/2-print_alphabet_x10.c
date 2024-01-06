#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a < 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}

