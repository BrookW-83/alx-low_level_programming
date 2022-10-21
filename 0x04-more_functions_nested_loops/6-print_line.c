#include "main.h"

/**
 * print_line - prints a straiht line
 * @i: the amount of '_' needed to draw a line
 */

void print_line(int i)
{
	int j;

	if (i >= 1)
	{
		for (j = 0; j < i; j++)
			_putchar('_');
	}
	_putchar('\n');
}
