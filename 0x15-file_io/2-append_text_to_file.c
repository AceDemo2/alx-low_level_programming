#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(f, text_content, strlen(text_content));
		if (w == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}


