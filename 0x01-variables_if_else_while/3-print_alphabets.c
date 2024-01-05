int main(void)
{
	char l, h;

	l = 'a';
	h = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}

