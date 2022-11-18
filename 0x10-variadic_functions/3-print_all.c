#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of argument
 * Return: NULL
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, k = 0;
	char *a;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), k = 1;
			break;
		case 's':
			a = va_arg(valist, char *), k = 1;
			if (!a)
			{
				printf("(nil)");
				break;
			}
			printf("%s", a);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
