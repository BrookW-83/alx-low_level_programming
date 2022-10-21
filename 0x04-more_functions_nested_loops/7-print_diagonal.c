#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @i: the number of times '\' should be printed
 */

void print_diagonal(int i)
{
	int n, m;

	if (i <= 0)
		_putchar('\n');
	for (n = 0; n < i; n++)
	{
		for (m = 0; m < n; m++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
