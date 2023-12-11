#include "main.h"

/**
 * _getenv - Get the value of an environment variable.
 * @variable: The name of the environment variable..
 *
 * Return: A pointer to the value of the environment variable,
 *         or NULL if the variable is not found.
*/

char *_getenv(const char *variable)
{
	char **env = NULL;
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		char *equalSign = _strchr(env[i], '=');

		if (equalSign != NULL)
		{
			size_t varL = equalSign - env[i];

			if (_strncmp(variable, env[i], varL) == 0 && variable[varL] == '\0')
			{
				return (equalSign + 1);
			}
		}
	}
	return (NULL);
}
