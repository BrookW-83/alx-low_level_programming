#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int d);

/**
 * create_buffer - allocates space for buffer
 * @file: name of file buffer
 * Return: pointer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Close file descriptor
 * @d: file descriptor to be closed
 */

void close_file(int d)
{
	int s;

	s = close(d);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 (Success)
 *
 * Description: If argument count is incorrect - exit(97)
 *              If file_l dosen't exist - exit(98)
 *              If file_r can't be created or written - exit(99)
 *              If file_r or file_l can't be closed - eixt(100)
 */

int main(int argc, char *argv[])
{
	int l, r, i, j;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	l = open(argv[1], O_RDONLY);
	i = read(l, buffer, 1024);
	r = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (l == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		j = write(r, buffer, i);
		if (r == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"ERROR: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);

		}

		i = read(l, buffer, 1024);
		r = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);

	free(buffer);
	close_file(l);
	close_file(r);

	return (0);
}
