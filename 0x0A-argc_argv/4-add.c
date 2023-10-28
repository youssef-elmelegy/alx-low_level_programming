#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, *char argv[])
{
	int i = 0;
	int sum = 0;

	while (--argc)
	{
		i++;
		if (argv[i] < '0' || argv[i] > '9')
			return (printf("Error\n"), 1);
		sum += argv[i];
	}
	printf("sum\n");
	return (0);
}
