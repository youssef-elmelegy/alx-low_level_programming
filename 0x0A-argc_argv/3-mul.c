#include <stdio.h>
#include <stdio.h>

/**
 * main-print sum of 2 numbers.
 * @argc:number of commandline argument.
 * @argv:pointer to an array of command line arguments.
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (1);
}
