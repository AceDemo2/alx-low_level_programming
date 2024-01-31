#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: Integer operand
 * @b: Integer operand
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: Integer operand
 * @b: Integer operand
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: Integer operand
 * @b: Integer operand
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: Integer operand
 * @b: Integer operand (non-zero)
 *
 * Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

