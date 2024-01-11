#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while (*s)
    {
        if (*s == '-')
        {
            sign = -sign;
        }
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';
            if (result > (INT_MAX - digit) / 10)
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
        }
        else if (*s != ' ')
        {
            break;
        }

        s++;
    }

    return result * sign;
}

