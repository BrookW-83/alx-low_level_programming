#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1.
 * @n: pointer to bit
 * @index: index for set
 * Return: Success 1 else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
