#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list(i);

	if (separator == NULL)
		return;
	va_start(i, n);
	while (j < n - 1)
	{
		printf("%d", va_arg(i, int));
		j++;
	}
	print("%d\n", va_arg(i, int));
	va_end(i);
}
