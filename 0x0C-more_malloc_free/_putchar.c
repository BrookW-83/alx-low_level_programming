#include <unistd.h>


/**
 * _putchar - prints to std output
 * @i: character to print
 * Return: 1 Success
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
