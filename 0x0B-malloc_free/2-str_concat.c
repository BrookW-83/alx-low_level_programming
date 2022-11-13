#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first input char
 * @s2: second input char
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	char *o = "";
	unsigned int i, j, x, y;

	i = j = x = y = 0;
	if (s1 == NULL)
		s1 = o;
	if (s2 == NULL)
		s2 = o;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;

	c = malloc((i + j) * sizeof(*c));
	if (c == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		c[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		c[x] = s2[y];
		y++;
		x++;
	}
	c[x] = '\0';
	return (c);
}
