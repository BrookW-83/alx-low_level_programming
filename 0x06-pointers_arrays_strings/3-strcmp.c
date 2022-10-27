#include "main.h"

/**
 * _strcmp - compare two stings
 * @s1: First string
 * @s2: Second string
 * Return: diffrence
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, sub = 0;

	while (1)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
			break;
		else if (s1[n] != s2[n])
		{
			sub = s1[n] - s2[n];
			break;
		}

		else if (s1[n] == '\0')
		{
			sub = s2[n];
			break;
		}

		else if (s2[n] == '\0')
		{
			sub = s1[n];
			break;
		}
		else
			n++;
	}
	return (sub);
}
