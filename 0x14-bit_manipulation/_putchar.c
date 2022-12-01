#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints to std out
 * @i: input char
 * Return: 0 (Success)
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
