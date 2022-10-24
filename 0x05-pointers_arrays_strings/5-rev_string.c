#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: reversed output string
 * Return: Always 0
 */

void rev_string(char *s)
{
	char c = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
