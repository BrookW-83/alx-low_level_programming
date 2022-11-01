#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segement
 * @accept: checking byetes
 * Retunr: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int c;
	int i = 0;
	unsigned int count = 0;

	while (*s != '\0')
	{
		c = 0;

		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				c = 1;
			i++;
		}

		i = 0;
		if (c == 0)
			break;
		count++;
		s++;
	}
	return (count);
}
