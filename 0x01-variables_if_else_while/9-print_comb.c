#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	int c = 44;

	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(c);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
