#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of array
 * @a: pointer
 * @n: number of elements to be printed
 * Return: Noting
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
