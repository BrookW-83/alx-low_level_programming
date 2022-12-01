#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to
 * @n: pointer to bit
 * @index: index for set
 * Return: 1 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
