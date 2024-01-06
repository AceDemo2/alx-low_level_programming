int main(void)
{
	int i, j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			putchar(i / 10);
			putchar(i % 10);
			putchar(' ');
			putchar(j / 10);
			putchar(j % 10);
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

