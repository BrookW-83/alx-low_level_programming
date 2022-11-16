#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @i: input character
 * Return: 1 (Success)
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
