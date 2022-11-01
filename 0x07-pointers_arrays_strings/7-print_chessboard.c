#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: size of array
 * Return: NULL
 */

void print_chessboard(char (*a)[8])
{
	int m;
	int n = 0;

	while (n < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[n][m]);

			if (m == 7)
				_putchar('\n');
			m++;

		}
		n++;
	}
}
