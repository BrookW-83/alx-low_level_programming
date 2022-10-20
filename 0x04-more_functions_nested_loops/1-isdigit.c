#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @i: Input value
 * Return: 1 if its a digit else 0
 */

int _isdigit(int i)
{
	int j = 0;

	if (i >= '0' && i <= '9')
		j = 1;
	return (j);
}
