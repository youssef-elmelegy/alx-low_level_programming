#include "main.h"

/**
 * execmd - function that execute the command
 * @argv: array of the command
 *
 * Return: void
*/

void *execmd(char **argv)
{
	char *command = NULL, *rel_command = NULL;

	if (!argv)
	{
		return (NULL);
	}

	command = argv[0];
	rel_command = get_loc(command);

	if (!rel_command)
	{	

		free(command);
		return (NULL);
	}
	if (execve(rel_command, argv, NULL) == -1)
	{
		perror("execve failed");
	}
	free(rel_command);
	return (NULL);
}
