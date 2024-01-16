/**
 * len - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int len(char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return (0);
	return (1 + len(&s[i + 1]));
}
/**
 * pal - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (pal(s, i + 1, j - 1));
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int l, m;
	l = len(s) - 1;
	m = pal(s, 0, l);
	return (m);
}
