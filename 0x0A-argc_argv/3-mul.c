#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program that multiplies two numbers
 * @argc: the number of arguments passed
 * @argv: names of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
