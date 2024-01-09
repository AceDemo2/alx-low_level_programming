#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @num: The number for which to find the largest prime factor
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long num)
{
    long factor = 2;

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

    return factor;
}

int main(void)
{
    long number = 612852475143;
    long result = largest_prime_factor(number);

    printf("%ld\n", result);

    return 0;
}

