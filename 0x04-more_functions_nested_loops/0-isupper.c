#include "main.h"

/**
 * _isupper - checks input if its upper case or not
 * @i: Input character
 * Return: Always 0
 */

int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
