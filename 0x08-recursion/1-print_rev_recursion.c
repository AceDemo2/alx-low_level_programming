#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (!s[i])
		return;
	else
	{
		_print_rev_recursion(&(s[i]));
		i++;
	}
	_putchar(s[i];
}
