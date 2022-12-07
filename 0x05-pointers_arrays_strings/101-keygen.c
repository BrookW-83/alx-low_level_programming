#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random valid passwords
 * Return: 0 (Success)
 */

int main(void)
{
	char password[84];
	int i = 0, c = 0, n, m;

	srand(time(0));

	while (c < 2772)
	{
		password[i] = 33 + rand() % 94;
		c += password[i++];
	}

	password[i] = '\0';

	if (c != 2772)
	{
		n = (c - 2772) / 2;
		m = (c - 2772) / 2;
		if ((c - 2772) % 2 != 0)
			n++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + n))
			{
				password[i] -= n;
				break;
			}
		}

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + m))
			{
				password[i] -= m;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
