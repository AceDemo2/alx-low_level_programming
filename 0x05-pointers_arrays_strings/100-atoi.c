#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
    unsigned int i = 0, j = 0, k = 1;

    while (s[i])
    {
        if (s[i] == '-')
        {
            k = -k;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            j = j * 10 + (s[i] - '0');
        }
        else
        {
            if (j != 0)
                break;
        }
        i++;
    }

    return (j * k);
}

