#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to int
 * @b: input string
 * Return: converted value
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int val = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);

		val = 2 * val + (b[n] - '0');
	}
	return (val);
}
