#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: int type number
 * Return: return value of last digit
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		_putchar((-1 * (i % 10)) + '0');
		return (-1 * (i % 10));
	}
}
