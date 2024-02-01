#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *k = format, j;
	int l = 0; 
	va_list i;

	va_start(i, format);
	while (*k)
	{
		if (l > 0)
			printf(", ");
		switch (*k)
		{
			case 'c':
				printf("%c", va_arg(i, char));
				break;
			case 'i':
				printf("%d", va_arg(i, int));
				break;
			case 'f':
				printf("%f", va_arg(i, double));
				break;
			case 's':
				{
				j = va_arg(i, char *);
				if (j == NULL)
					printf("(nill)");
				else
					printf("%s", j);
				break;
				}
			default:
				break;
		}
		k++;
		l++;
	}
	printf("\n");
	va_end(i)
}
