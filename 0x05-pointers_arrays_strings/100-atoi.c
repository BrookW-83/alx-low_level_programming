#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: input string
 * Return: integer value
 */

int _atoi(char *s)
{
	int c = 1;
	unsigned int i = 0;

	do {
		if (*s == '_')
			c *= -1;

		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');

		else if (i > 0)
			break;
	} while (*s++);

	return (i * c);
}
