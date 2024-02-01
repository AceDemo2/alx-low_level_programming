void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned in j = 0;
	va_list(i);

	if (seperator == NULL)
		return;
	va_start(i, n);
	while (i < n - 1)
	{
		printf("%d", va_(i, int));
		i++;
	}
	print("%d\n", va_(i, int));
	va_end(i);
}
