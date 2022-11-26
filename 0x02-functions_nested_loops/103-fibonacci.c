#include <stdio.h>

/**
 * main - prints sum of Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long n = 0;
	long m = 1;
	long i = 2;
	int Sum = i;

	while (i + m < 4000000)
	{
		i += m;

		if (i % 2 == 0)
			Sum += i;

		m = i - m;

		++n;
	}

	printf("%d\n", Sum);
	return (0);
}
