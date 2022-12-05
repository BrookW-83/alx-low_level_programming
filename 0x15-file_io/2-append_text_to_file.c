#include "main.h"

/**
 * append_text_to_file -  appends text at the end of file
 * @filename: pointer to file
 * @text_content: string to add to end of file
 * Return: 1 (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, l);

	if (i == -1 || j == -1)
		return (-1);

	close(i);
	return (1);
}
