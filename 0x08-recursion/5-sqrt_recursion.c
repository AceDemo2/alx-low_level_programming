/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	int i = 0, e;
	
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	e = 0.0000000001;
	while (((i * i) - n) < 0)
	{
		i = (i + n / i) * 0.5;
	}
	return (i);
}	
