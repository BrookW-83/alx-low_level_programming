#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: input array
 * @size: array size
 * @action: function to execute
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	n = 0;

	while (array[n] && n < size)
	{
		action(array[n]);
	}

	n++;
}
