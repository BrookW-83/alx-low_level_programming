#include  <unistd.h>
#include "main.h"

/**
 * _putchar - prints character c to stdout
 * @c: the character to be printed
 * Return: 1 (Success) else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
