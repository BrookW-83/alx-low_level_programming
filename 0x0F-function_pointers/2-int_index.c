#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to function
 * Return: 0, -1 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n] != 0))
				return (n);
		}
	}

	return (-1);
}
