#include "main.h"

/**
 * execmd - function that execute the command
 * @argv: array of the command
 *
 * Return: void
*/

void execmd(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
