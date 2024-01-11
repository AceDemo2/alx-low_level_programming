#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 1;

	while (s[i])
	{
		if (s[i] == '-')
			k = -k;
		if (s[i] <= '0' && s[i] >= '9')
			break;
		else
			j = j * 10 + (s[i] - '0');
		i++;
	}
	return (j * k);
}
