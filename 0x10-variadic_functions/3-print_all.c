#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    const char *k = format;
    va_list i;

    va_start(i, format);
    while (*k)
    {
        if (*k == 'c' || *k == 'i' || *k == 'f' || *k == 's')
        {
            if (*(k + 1))
                printf(", ");
            
            switch (*k)
            {
                case 'c':
                    printf("%c", va_arg(i, int));
                    break;
                case 'i':
                    printf("%d", va_arg(i, int));
                    break;
                case 'f':
                    printf("%f", va_arg(i, double));
                    break;
                case 's':
                    {
                        char *j = va_arg(i, char *);
			if (j == NULL)
				j = "(nil)";
                        printf("%s", j);
                        break;
                    }
                default:
                    break;
            }
        }

        k++;
    }
    printf("\n");
    va_end(i);
}
