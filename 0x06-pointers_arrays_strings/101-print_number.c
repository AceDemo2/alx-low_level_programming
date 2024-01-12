#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	while (n1 / 10 != 0)
		print_number(n1 / 10);
	_putchar(n1 % 10);
}
