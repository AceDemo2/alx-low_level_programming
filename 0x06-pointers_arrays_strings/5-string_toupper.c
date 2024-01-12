#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @n:string
 * Return:char
 */
char *string_toupper(char *n)
{
	char *p = n;

	while (*n)
	{
		if (*n >= 'a' && *n <= 'z')
			*n -= ' ';
		n++;
	}
	return (p);
}
