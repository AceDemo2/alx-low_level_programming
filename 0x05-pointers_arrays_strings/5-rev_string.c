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
	int i = 0, j = 0, k;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	while (j < k)
	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
		j++;
		k--;
	}
}
