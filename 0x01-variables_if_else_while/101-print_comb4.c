#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j;
	int k;
	int n = 44;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(n);
					putchar(32);
				}
				k += 1;
			}
			j += 1;
		}
		i += 1;
	}
	putchar('\n');
	return (0);
}
