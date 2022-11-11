#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conactinates strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (n > j)
		n = j;
	s = malloc((i + n + 1) * sizeof(char));

	if (s == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		s[k] = s2[k - i];
	}
	s[k] = '\0';
	return (s);
}

