#include <unistd.h>

/**
 * _putchar - prints output in stdout
 * @c: char to be perinted
 * Return: 1 On Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
