#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int i = 2;
	
	if (!str)
		_putchar('\n');
	else
	{
		_putchar(str[0]);
		while (str[i] != '\0')
		{
			if (str[i - 1] == '\0')
				break;
			_putchar(str[i]);
			i += 2;
		}
	}
	_putchar('\n');
}
