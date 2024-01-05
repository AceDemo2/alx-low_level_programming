#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char l, h;

	l = 'a';
	h = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}

