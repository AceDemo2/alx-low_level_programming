#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
		i++;
	while (s[i] != 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
}
