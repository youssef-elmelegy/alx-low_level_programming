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
	int sum = 0;
	char *c;

	while (--argc)
	{
		i++;
		for (c = argv[argc]; *c; c++)
		{
			if (argv[argc] < '0' || argv[argc] > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
