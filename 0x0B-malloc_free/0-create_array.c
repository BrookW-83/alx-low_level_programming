#include <stdlib.h>

/**
 * create_array - creates an array of chars, with a specific char
 * @size: input size
 * @c: input character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int n = 0;

	if (size != 0)
		i = malloc(size * sizeof(char));
	else
		return (NULL);

	if (i == NULL)
		return (NULL);

	while (n < size)
	{
		i[n] = c;
		n++;
	}

	return (i);
}
