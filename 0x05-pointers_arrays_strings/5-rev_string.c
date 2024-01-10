#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		temp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = temp;
		j++;
		i--;
	}
}
