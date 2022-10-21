#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	char s;

	c = 'a';
	s = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}

	putchar('\n');
	return (0);
}

