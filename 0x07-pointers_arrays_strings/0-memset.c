#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: size of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(s + j) = b;
		j++;
	}

	return (s);
}
