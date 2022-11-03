#include "main.h"

/**
 * _sqrt_recursion - functio returns natural square root of a number
 * @n: input number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - functio returns natural square root of a number
 * @n: input number
 * @i: squared number
 * Return: square root of n
 */

int _sqrt(int n, int i)
{
	if (n > i / 2)
		return (-1);
	else if (n * n == i)
		return (n);
	return (_sqrt(n + 1, i));
}
