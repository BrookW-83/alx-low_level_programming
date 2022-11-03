#include "main.h"

/**
 * is_prime_number - checks if input is prime number
 * @n: input number
 * Return: result
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (primeNum(n, 2));
}

/**
 * primeNum - checks if input is 0 or 1
 * @i: input number
 * @c: counter variable
 * Return: value
 */

int primeNum(int i, int c)
{
	if (i == c)
		return (1);
	if (i % c == 0)
		return (0);
	return (primeNum(i, c + 1));
}
