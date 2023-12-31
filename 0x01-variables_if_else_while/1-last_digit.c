#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;
	printf("Last digit of %d is %d %s\n", n, ls,
		       (ls > 5) ? "and is greater than 5" :
		       (ls == 0) ? "and is 0" :
		       "and is less than 6 and not 0");
	return (0);
}
