#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	char *n3, *n4;

	i = j = k = l = m = n = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;

	n3 = (i >= j) ? n1 : n2;
	n4 = (i >= j) ? n2 : n1;

	i--;
	j--;

	while (i >= 0 || j >= 0)
	{
		n = ((n3[i] - '0') + (n4[j] - '0'));
		if (n > 9 && i > 0)
			n3[i - 1] = ((n3[i - 1] - '0') + 1) + '0';
		n %= 10;
		r[k++] = n + '0';
		i--;
		j--;
	}

	if (k >= size_r || m > size_r)
		return (0);

	r[k] = '\0';

	/* Reverse the result */
	for (i = 0, l = k - 1; i < l; i++, l--)
	{
		char temp = r[i];
		r[i] = r[l];
		r[l] = temp;
	}

	return (r);
}

