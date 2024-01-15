#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (!s[i])
		_putchar('\n');
	_putchar(s[i]);
	_puts_recursion(s[i]);
}

