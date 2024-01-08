#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1 ; j++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				putchar('#');
			_putchar('\n');
		}
	}
}
