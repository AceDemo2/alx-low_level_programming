#include <stdio.h>
#include <math.h>
/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
        long int i, j = 612852475143, k = 0, sq;

	sq = (long int)sqrt(j);
        for (i = 2; i <= sq; i++)
        {
                while (sq % i == 0)
                {
                        sq /= i;
                        if (i > k)
                                k = i;
                }

        }
        printf("%ld\n", k);
        return (0);
}
