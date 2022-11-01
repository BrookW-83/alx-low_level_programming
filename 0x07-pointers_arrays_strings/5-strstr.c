#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: intial string
 * @needle: substring
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *c;
	char *a;

	while (*haystack != '\0')
	{
		c = haystack;
		a = needle;

		while (*a == *haystack && *a != '\0' && *haystack != '\0')
		{
			haystack++;
			a++;
		}

		if (*a == '\0')
			return (c);
		haystack = c + 1;
	}
	return (NULL);
}
