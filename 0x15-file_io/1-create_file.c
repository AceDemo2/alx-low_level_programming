#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int i;

	if (filname == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		r = write(i, text_content, strlen(text_content));
		if (r == -1)
		{
			close(i);
			return (-1);
		}
	}
	close(i);
	return (1);
}
