#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int i = 0, j = 0, k;

	while (str[i])
		i++;
	while (j < i / 2)
		j++;
	if (i % 2 == 0)
		k = j;
	else
		k = j + 1;
	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
