#include "main.h"

/**
 * leet - function to encode a string
 * @str: input string
 * Return: str
 */

char *leet(char *str)
{
	int n, m;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (str[n] == c1[m])
			{
				str[n] = c2[m];
			}
		}
	}
	return (str);
}
