#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	char n[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *p = s, *p2;

	while (*s)
	{
		p2 = n;
		while (*p2)
		{
			if (*s == *p2)
			{
				s++;
				if (*s && *s >= 'a' && *s <= 'z')
				{
					*s -=32;
					break;
				}
			}
			p2++;
		}
		s++;
	}
	return (p);
}
