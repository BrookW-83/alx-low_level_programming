#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: length of argv
 * @argv: number of argument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, nums, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	i = nums = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nums = atoi(argv[i]);

	if (nums <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[i] != '\0')
	{
		if (nums >= coins[i])
		{
			aux = (nums / coins[i]);
			change += aux;
			nums -= coins[i] * aux;
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
