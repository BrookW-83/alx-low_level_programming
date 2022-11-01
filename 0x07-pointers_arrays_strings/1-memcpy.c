#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination position
 * @src: source postion
 * @n: byte size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
