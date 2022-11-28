#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_char - checks a given character is int
 * @c: input char
 * Return: int
 */

int check_char(char *c)
{
	int i, n, j;

	i = 0;
	n = 0;
	j = strlen(c);
	while (i < j)
	{
		if (c[i] < '0' || c[i] < '9')
		{
			return (-1);
		}
		else
			n = n * 10 + (c[i] - '0');
		i++;
	}
	return (n);
}

/**
 * add_s - function that adds positive numbers
 * @argc: argeument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int add_s(int argc, char *argv[])
{
	int i, nums, ans;

	ans = 0;
	for (i = 1; i < argc; i++)
	{
		nums = check_char(argv[i]);
		if (nums == -1)
		{
			printf("Error\n");
			return (1);
		}
		ans += nums;

	}
	printf("%d\n", ans);
	return (0);
}
