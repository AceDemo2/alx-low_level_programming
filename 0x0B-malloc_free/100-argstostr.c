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
	int i = 0, j, k;
	char *a;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{	j = 0;
		while (av[i][j])
			i++;
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			a[k] = av[i][j];
		a[k] = '\n';
	}
	a[k] = '\0';
	return (a);
}
		
