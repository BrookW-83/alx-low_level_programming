#include "main.h"

/**
 * print_number - prints an integer
 * @n: input value
 * Return: None
 */

void print_number(int n);
{
	unsigned int p1, p2;
	int i;
	int res = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	p1 = n;
	p2 = p1;
	if (p1 > 9)
	{
		while (p1 > 9)
		{
			res = res * 10;
			p1 = p1 / 10;
		}
		_putchar((p2 / res) + '0');
		res = res / 10;

		for (i = res; i >= 1; i = i / 10)
			_putchar((p2 / i) % 10 + '0');
	}
	else
		_putchar(p1 + '0');
}
