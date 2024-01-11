#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // 1 represents positive, -1 represents negative

    while (*s)
    {
        if (*s == '-')
        {
            sign = -sign; // Toggle the sign on encountering a minus sign
        }
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';

            // Check for overflow before updating result
            if (result > (INT_MAX - digit) / 10)
            {
                return (sign == 1) ? INT_MAX : INT_MIN; // Handle overflow
            }

            result = result * 10 + digit;
        }
        else if (*s != ' ')
        {
            break; // Stop if a non-numeric character is encountered
        }

        s++;
    }

    return result * sign;
}

