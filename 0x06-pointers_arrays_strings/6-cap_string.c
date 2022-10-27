#include "main.h"

/**
 * cap_string - capitalizing all the words in a string
 * @n: string to capitalize
 * Return: n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[++i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;

		if (n[i - 1] == ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
				n[i - 1] == '}')
			n[i] -= 32;
	}
	return (n);
}
