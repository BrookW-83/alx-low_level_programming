#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads text and prints to POSIX
 * @filename: pointer to file
 * @letters: number of letters in function
 * Return: 1 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, n;
	char *p;

	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, p, letters);
	n = write(STDOUT_FILENO, p, j);

	if (i == -1 || j == -1 || n == -1 || n != j)
	{
		free(p);
		return (0);
	}

	free(p);
	close(i);

	return (n);
}
