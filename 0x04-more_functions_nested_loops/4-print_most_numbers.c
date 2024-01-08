#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

<<<<<<< HEAD
	for (i = '0'; i <= '9'; i++)
		_putchar(i);
=======
	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
>>>>>>> e4f71db37c7a779c847601ce777675b52b463e1b
	_putchar('\n');
}
