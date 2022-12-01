#include "main.h"

/**
 * flip_bits - function that returns the number of bits to flip
 * @n: input number
 * @m: number to flip
 * Return: bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m, s = 0;

	while (bit > 0)
	{
		s += (bit & 1);
		bit >>= 1;
	}

	return (s);
}
