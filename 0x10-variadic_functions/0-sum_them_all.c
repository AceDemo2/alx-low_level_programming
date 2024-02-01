#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0, k = 0;

	if (n == 0)
		return (0);
	va_list i;
	va_start(i, n);
	while (j < n)
	{
		k += va_arg(i, int);
		j++;
	}
	va_end(i);
}
