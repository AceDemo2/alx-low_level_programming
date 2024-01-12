#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *n)
{
	char *p = n;

	while (*n)
	{
		if (*n >= 'a' and *n <= 'z')
			*n -= 32;
		n++;
	}
	return (p);
}
