#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: names of argv
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int n = 0;

	while (argc--)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
