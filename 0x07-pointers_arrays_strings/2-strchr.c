#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	for(; *s; s++)
		return ((*s == c) ? s : NULL);
	return ((c == *s) ? s : NULL);
}
