#include <unistd.h>

/**
 * _putchar - writes characters to stdout
 * @i: character to be printed
 * Return: 1 (Success)
 */

int _puthcar(char i)
{
	return (write(1, &i, 1));
}
