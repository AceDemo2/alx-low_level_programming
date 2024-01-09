#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
    if (n == INT_MIN)
    {
        // Handle the special case of INT_MIN
        _putchar('-');
        _putchar('2'); // Digit in the ten-millions place
        n %= 1000000000; // Remove the ten-millions digit
        n = -n; // Make the remaining part positive
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

