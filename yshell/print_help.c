#include "main.h"

/**
 * _print - writes a array of chars in the standar output
 * @string: pointer to the array of chars
 * Return: the number of bytes writed or .
 * On error, -1 is returned, and errno is set appropriately
 */
int _print(char *string)
{
	return (write(STDOUT_FILENO, string, str_length(string)));
}

void print_environment(char *env[])
{
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		_print(env[i]);
		_print("\n");
	}
}
