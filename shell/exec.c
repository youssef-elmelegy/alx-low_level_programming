#include "main.h"

/**
 * execmd - function that execute the command.
 * @argv: array of the command
 *
 * Return: void
*/

void execmd(char **argv)
{
	char *command = NULL, *rel_command = NULL;

	if (argv)
	{
		command = argv[0];
		rel_command = get_loc(command);

		if (execve(rel_command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
