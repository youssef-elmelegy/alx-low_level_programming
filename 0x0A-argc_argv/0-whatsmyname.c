#include <stdio.h>

/**
 * main - prints a program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
