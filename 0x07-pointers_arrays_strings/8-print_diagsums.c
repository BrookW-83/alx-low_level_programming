#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals square matrix
 * @a: input values
 * @size: size of matrix
 * Return: Noting
 */

void print_diagsums(int *a, int size)
{
	int n = 0;
	int i = 0;
	int s1, s2;

	s1 = s2 = 0;

	while (n < (size * size))
	{
		i = *(a + n);
		s1 = s1 + i;
		n = n + size + 1;
	}

	n = size - 1;
	while (n < ((size * size) - 1))
	{
		i = *(a + n);
		s2 = s2 + i;
		n = n + (size - 1);
	}
	printf("%d, %d\n", s1, s2);
}
