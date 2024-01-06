#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: int type number
 * Return: return value of last digit
 */
int print_last_digit(int i)
{
	if (i > 0)
		return (i % 10);
	else
		return (-(i) % 10);
}
