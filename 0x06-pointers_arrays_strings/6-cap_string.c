#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
    char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
    char *p = s, *p2;

    /* Check if the first character is a lowercase letter */
    if (*s >= 'a' && *s <= 'z')
        *s -= 32;

    while (*s)
    {
        p2 = separators;

        /* Iterate through separators */
        while (*p2)
        {
            /* Check for a separator */
            if (*s == *p2)
            {
                /* Check if the next character is a lowercase letter */
                if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
                    *s -= 32;
            }
            p2++;
        }

        s++; /* Move to the next character */
    }
    return p;
}
