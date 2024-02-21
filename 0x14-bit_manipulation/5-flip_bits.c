#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m.
 * @n: first number
 * @m: second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i > 0)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
