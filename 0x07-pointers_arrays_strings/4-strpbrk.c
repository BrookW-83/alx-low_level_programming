#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: byte to gain
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int c;
	int n = 0;

	while (*s != '\0')
	{
		c = 0;
		while (*(accept + n) != '\0')
		{
			if (*s == *(accept + n))
				c = 1;
			n++;
		}

		n = 0;
		if (c == 1)
			return (s);
		s++;
	}
	return (NULL);
}
