#include "main.h"

/**
 * swap_int -  Swaps the value of two integers
 * @a: First input
 * @b: Second input
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
