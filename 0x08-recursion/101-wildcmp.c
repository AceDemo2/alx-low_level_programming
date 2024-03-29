#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical, 0 otherwise.
 * @s1: the first string
 * @s2: the second string with special character *
 * Return: 1 if identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*s1 == '\0')
            return wildcmp(s1, s2 + 1);
        return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
    }

    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    return 0;
}
