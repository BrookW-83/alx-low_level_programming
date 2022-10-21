#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @i: size of the triangle
 */

void print_triangle(int i)
{
	int n, m;

	if (i > 0)
	{
		for (n = 1; n <= i; n++)
		{
			for (m = i - n; m > 0; m--)
				_putchar(' ');
			for (m = 0; m < n; m++)
				_putchar('#');
			if (n == i)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
