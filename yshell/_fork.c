#include "main.h"

/**
 * _fork - create a child to execute command
 * @new_argv: string of command and arguments
 * Return: 0 for parent
*/

int _fork(char **new_argv)
{
	pid_t child = fork();
	int status = 0;

	if (child == -1)
	{
		perror("fork failed");
		return (-1);
	}
	if (child == 0)
	{
		execmd(new_argv);
		return (-1);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
