#include "main.h"
/**
 * error - prints an error message to stderr
 * @a: error code
 * @b: file name
 * @c: int file
 *
 * Description: Prints error messages to the POSIX standard error based on the
 * provided error code and file name.
 */
void error(int a, char *b, int c)
{
	if (a == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (a == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", b);
	else if (a == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b);
	else if (a == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
	exit(a);
}
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 *
 * Return: 0 on success, appropriate error code on failure
 *
 * Description: The main function copies the content of a file specified by the
 * file_from argument to a new file specified by the file_to argument. It reads
 * the file_from in chunks of BUF_SIZE bytes and writes them to file_to. It
 * performs error checking and prints appropriate error messages to the POSIX
 * standard error based on different failure scenarios.
 */
int main(int ac, char **av)
{
	int f1, f2, r = 1024, w, c1, c2;
	char buff[1024];

	if (ac != 3)
		error(97, NULL, 0);
	f1 = open(av[1], O_RDONLY);
	if (f1 == -1)
		error(98, av[1], 0);
	f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		close(f1);
		error(99, av[2], 0);
	}
	while (r == 1024)
	{
		r = read(f1, buff, sizeof(buff));
		if (r == -1)
		{
			close(f1);
			close(f2);
			error(98, av[1], 0);
		}
		w = write(f2, buff, r);
		if (w == -1 || w != r)
		{
			close(f1);
			close(f2);
			error(99, av[2], 0);
		}
	}
	c1 = close(f1);
	if (c1 == -1)
		error(100, NULL, f1);
	c2 = close(f2);
	if (c2 == -1)
		error(100, NULL, f2);
	return (0);
}
