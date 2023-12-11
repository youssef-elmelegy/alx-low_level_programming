#include "main.h"

/**
 * _getenv - Get the value of an environment variable.
 * @variable: The name of the environment variable.
 *
 * Return: A pointer to the value of the environment variable,
 *         or NULL if the variable is not found.
*/

char *_getenv(const char *variable)
{
	char **environ = NULL;
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		char *equalSign = _strchr(environ[i], '=');

		if (equalSign != NULL)
		{
			size_t varL = equalSign - environ[i];

			if (_strncmp(variable, environ[i], varL) == 0 && variable[varL] == '\0')
			{
				return (equalSign + 1);
			}
		}
	}
	return (NULL);
}
