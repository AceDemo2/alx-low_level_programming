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
	char *k;
	va_list j;

	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		va_start(j, n);
		while (i < n - 1)
		{
			k = va_arg(j, char *);
			printf("%s%s", (k == NULL) ? "(nil)" : k, separator);
			i++;
		}
		k = va_arg(j, char *);
		printf("%s\n", (k == NULL) ? "(nil)" : k);
		va_end(j);
	}
	else
		printf("\n");
}
