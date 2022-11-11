#include <stdlib.h>

/**
 * malloc_checked - returns a pointer
 * @b: unsigned int
 * Return: Null
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	else
		return (i);
}
