#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to
 * @n: pointer to bit
 * @index: index for set
 * Return: 1 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= -(1 << index);

	return (1);
}
