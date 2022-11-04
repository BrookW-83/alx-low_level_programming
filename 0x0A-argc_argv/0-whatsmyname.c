#include <stdio.h>

/**
 * main - function that prints its name, followed by a new line
 * @argc: arguments that's passed to function
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
