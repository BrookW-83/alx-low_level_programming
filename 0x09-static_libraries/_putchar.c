#include <unistd.h>

/**
 * _putchar - prints to std out
 * @c: input character
 * Return: 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
