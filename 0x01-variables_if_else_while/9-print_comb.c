int main(void)
{
	int i = 0;

	while (i < 9)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');		
		i++;
	}
	putchar('\n');
	return (0);
}
