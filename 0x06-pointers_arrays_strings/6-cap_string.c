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

    while (*s)
    {
        p2 = separators;
        while (*p2)
        {
            if (*s == *p2)
            {
                s++;
                while (*s != '\0' && (*s == ' ' || *s == '\t' || *s == '\n' ||
                                      *s == ',' || *s == ';' || *s == '.' ||
                                      *s == '!' || *s == '?' || *s == '"' ||
                                      *s == '(' || *s == ')' || *s == '{' || *s == '}'))
                    s++;
                if (*s >= 'a' && *s <= 'z')
                    *s -= 32;
                break;
            }
            p2++;
        }
        s++;
    }

    return p;
}

