#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5
 *
 * Return: multiple
 */

int main(void)
{
	int mul = 0;
	int res = 0;

	while (mul < 1024)
	{
		if (mul % 3 == 0 || mul % 5 == 0)
		{
			res += mul;
		}
		mul++;
	}
	printf("%d\n", res);
	return (0);
}

