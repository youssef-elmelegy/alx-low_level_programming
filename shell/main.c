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
	char *getin;
	size_t length = 0;
	ssize_t num;

	(void)ac;
	(void)argv;
	
	while (1)
	{
		_print(prompt);

		num = getline(&getin, &length, stdin);
		if (num == EOF)
		{
			_print("Exiting shell...\n");
			return (-1);
		}
		_print(getin);

	}
	free(getin);

	return (0);
}
