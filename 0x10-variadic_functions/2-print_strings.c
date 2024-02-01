#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list j;
	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		va_start(j, n);
		while (i < n - 1)
		{
			printf("%s%s", va_args(j, char *), separator);
			i++;
		}
		printf("%s\n", va_args(j, char *));
		va_end j;
	}
	else
		printf("\n");
}
