#include "main.h"

/**
 * main - A simple shell heart
 * @ac: integar
 * @argv: double pointer
 *
 * Return: 0 if success
*/

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *getin = NULL, **new_argv = NULL;
	size_t length = 0;
	ssize_t num = 0;
	int i = 0;

	(void)ac;
	while (1)
	{
		_print(prompt);
		num = getline(&getin, &length, stdin);
		if (num == EOF)
		{
			_print("Exiting shell...\n");
			free(getin);
			return (-1);
		}
		new_argv = token(argv, getin, num);
		if (new_argv == NULL)
			return (-1);
		if (_fork(new_argv) < 0)
			return (0);
		for(i = 0; new_argv[i] != NULL; i++)
		{
			free(new_argv[i]);
		}
		free(new_argv);
		argv = new_argv;
	}
	free(argv);
	free(getin);
	return (0);
}

/**
 * token - token the string
 * @argv: argv
 * @getin: string
 * @size: size of string
 * Return: argv pointer
 */

char **token(char **argv, char *getin, size_t size)
{
	char *c_getin = NULL, *token = NULL, *delim = " \n";
	int n_tokens = 0, i = 0;

	(void)size;

	c_getin = str_duplicate(getin);
	token = strtok(getin, delim);
	while (token != NULL)
	{
		n_tokens++;
		token = strtok(NULL, delim);
	}

	argv = malloc(sizeof(char *) * (n_tokens + 1));
	if (argv == NULL)
	{
		_print("err memory allocate ..");
		free(c_getin);
		return (NULL);
	}


	token = strtok(c_getin, delim);
	for (i = 0; token != NULL; i++)
	{
		argv[i] = str_duplicate(token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
	free(c_getin);
	token = NULL;
	return (argv);
}
