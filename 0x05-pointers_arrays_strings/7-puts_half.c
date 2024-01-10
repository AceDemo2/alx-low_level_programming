#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;
	while (j < i / 2)
		j++;
	while (str[j])
	{
		if (i % 2 == 0)
		{
			_putchar(str[j]);
			j++;
		}
		else
		{
			j++;
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
