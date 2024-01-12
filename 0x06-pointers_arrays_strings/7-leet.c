#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	char a[] = "4433007711", b[] = "aAeEoOtTlL", *s1 = s;
	
	while (*s)
	{
		while (*b)
		{
			if (*s == *b)
				*s = *a;
		b++;
		a++;
		}
		s++;
	}
	return (s1);
}
