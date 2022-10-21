#include "main.h"

/**
 * print_square - A function that prints a square
 * @i: The size of the square
 */

void print_square(int i)
{
	if (i <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int n, m;

		for (n = 0; n < i; n++)
		{
			for (m = 0; m < i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
