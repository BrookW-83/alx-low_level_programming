#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: input name
 * @f: function thats prints name
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
