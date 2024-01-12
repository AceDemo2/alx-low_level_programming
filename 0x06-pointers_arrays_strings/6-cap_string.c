#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	char n[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *p = s, *p2 = n;

	while (*s)
	{
		while (*p2)
		{
			if (*s == *p2)
			{
				*s++ -= 32;
				break;
			}
			p2++;
		}
		p2 = n;
		*s++;
	}
	return (p);
}
