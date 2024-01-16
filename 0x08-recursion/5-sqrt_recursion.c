/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
    return find_sqrt(n, 1);
}
/**
 * find_sqrt - helper function for recursive square root calculation
 * @n: integer to find sqrt of
 * @i: current guess
 * Return: natural square root or -1
 */
int find_sqrt(int n, int i)
{
	if (n < 0 || (i * i) > n)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	if (i * i == n)
	       return (i);
	i++;
	return (find_sqrt(i));
}	
