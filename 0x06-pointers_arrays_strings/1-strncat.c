#include "main.h"

/**
 * _strncat - function that concatinates two strings in n byte
 * @dest: copy to
 * @n: n bytes form src
 * @src: copy from
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n1;
	int n2;

	n1 = 0;
	while (dest[n1] != '\0')
	{
		n1++;
	}

	n2 = 0;
	while (src[n2] != '\0' && n2 < n)
	{
		dest[n1] = src[n2];
		n1++;
		n2++;
	}
	dest[n1] = '\0';
	return (dest);
}
