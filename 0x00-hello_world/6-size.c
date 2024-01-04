#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ty[] = {"char", "int", "long int", "long long int", "float"};
	int i = 0;

	while (i < sizeof(ty) / sizeof(ty[0]))
		{
			printf("Size of a %s: %d bytes(s)\n", ty[i], sizeof(ty[i]));
			i++;
		}
	return (0);
}	
