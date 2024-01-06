#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
