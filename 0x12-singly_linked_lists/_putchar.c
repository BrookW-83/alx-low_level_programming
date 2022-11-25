#include <unistd.h>

/**
 * _putchar - prints to std out
 * @i: character to be printed
 * Return: 1 (Success)
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
