#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @i: input number
 */

void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}
	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
}
