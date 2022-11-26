#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: value
 */

int main(void)
{
	long n = 0;
	long m = 1;
	int i = 0;
	long fib;

	while (i < 50)
	{
		fib = m + n;
		if (i != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		n = m;
		m = fib;
		i++;
	}
	return (0);
}
