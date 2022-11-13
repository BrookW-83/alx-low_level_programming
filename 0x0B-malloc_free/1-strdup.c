#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: input
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *pr;
	unsigned int n = 0;
	unsigned int m = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;
	n++;
	pr = malloc(n * sizeof(*pr));

	if (pr == NULL)
		return (NULL);
	while (m < n)
	{
		pr[m] = str[m];
		m++;
	}

	return (pr);
}
