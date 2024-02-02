#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    const char *k = format;
    char *j;
    int l = 0;
    va_list i;

    va_start(i, format);

    while (k && *k)
    {
        
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
                j = va_arg(i, char *);
                if (!j)
                    j = "(nil)";
                printf("%s", j);
                break;
            default:
                break;
        }

	if ((*k == 'c' || *k == 'i' || *k == 'f' || *k == 's') && *(k + 1))
            printf(", ");

        k++;
        l++;	
    }

    va_end(i);
    printf("\n");
}

