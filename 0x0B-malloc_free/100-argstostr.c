#include <stdlib.h>
/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i;
	char **a;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	a = malloc(sizeof(char *) * ac);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		a[i] = **av;
		i++;
		*a++;
	}
	return (a);
}
		
