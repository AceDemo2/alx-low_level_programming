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
	int i = 0, j, k = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{	j = 0;
		while (av[i][j])
		{
			j++;
			k++;
		}
		i++;
		k++;
	}
	a = malloc(sizeof(char) * (k + 1));
	if (a == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			a[k] = av[i][j];
		a[k] = '\n';
	}
	a[k] = '\0';
	return (a);
}
