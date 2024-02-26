#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *i;
	char *j;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	i = fopen(filename, "r");
	if (i == NULL)
		return (0);
	j = malloc(letters);
	if (j == NULL)
	{
		fclose(i);
		return (0);
	}
	r = fread(j, 1, letters, i);
	if (r == -1)
	{
		fclose(i);
		free(j);
		return (0);
	}
	w = write(1, j, letters);
	if (w == -1 || w != r)
	{
		fclose(i);
		free(j);
		return (0);
	}
	
	fclose(i);
	free(j);
	return (r);
}
