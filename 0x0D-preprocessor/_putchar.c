#include <unistd.h>

/**
 * _putchar - prints to stdout
 * @i: input char
 * Retrun: 1 (Success)
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
