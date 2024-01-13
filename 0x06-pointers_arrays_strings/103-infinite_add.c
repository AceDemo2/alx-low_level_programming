#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * ahhh! Crazy task! Expand your knowledge
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l, m = 0, n;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	while (i >= 0 && j >= 0)
	{
		n = ((n1[i - 1]) - '0' + (n2[j - 1]) - '0');
		if (n > 9)
		{
			((n1[i - 1]) - '0') += 1;
			n %= 10;
		}
		k = k * 10 + n;
		i--;
		j--;
	}
	l = k;
	while (l > 9)
	{
		l /= 10;
		m++;
	}
	if (m > size_r)
		return (0);
	else
	{
		r =(char *)&k;
		return(r);
	}
}

