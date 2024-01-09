#include <stdio.h>

/**
 * main - Finds the largest prime factor of a given number
 * @num: The number for which to find the largest prime factor
 *
 * Return: The largest prime factor
 */
int main(void)
{
    long factor = 2, num = 612852475143;

    while (num > 1)
    {
        if (num % factor == 0)
        {
            num /= factor;
        }
        else
        {
            factor++;
        }
    }
    printf("%ld\n", factor);

    return (0);
}
