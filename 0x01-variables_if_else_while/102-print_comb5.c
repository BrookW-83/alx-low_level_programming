#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int m;

	while (n < 100)
	{
		m = n + 1;
		while (m < 100)
		{
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);
			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
			m += 1;
		}
		n += 1;
	}
	putchar('\n');
	return (0);
}
