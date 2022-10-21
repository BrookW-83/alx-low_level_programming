#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		printf(" ");

		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i = 100)
			printf("Buzz ");
		else 
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

