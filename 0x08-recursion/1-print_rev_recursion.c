#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int i = -1;

	if (s[i] == '\0')
		return;
	i++;
	_print_rev_recursion(&s[i]);
	_putchar(s[i]);
}
