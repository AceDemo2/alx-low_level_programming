#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	char a[] = "4433007711", b[] = "aAeEoOtTlL", *s1 = s, *s2 = a, *s3 = b;
	
	while (*s)
	{
		while (*s3)
		{
			if (*s == *s3)
				*s = *s2;
		s3++;
		s2++;
		}
		s++;
	}
	return (s1);
}
