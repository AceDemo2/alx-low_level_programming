/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	return (_strlen_recursion(&s[i + 1]));
}
