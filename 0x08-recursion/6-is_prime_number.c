/**
 * prime - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int prime(int a, int b)
{
	if (a <= 0 || (a % b == 1))
	       return (0);
	if (b == 1)
		return (1);
	return prime(a, b - 1);
}
/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
