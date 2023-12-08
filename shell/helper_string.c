#include "main.h"

/**
 * str_length - give you the length of string.
 * @string: pointer of the string.
 * Return: string length.
 */
int str_length(char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);

	while (string[length++] != '\0')
	{
	}
	return (--length);
}

/**
 * str_duplicate - duplicates the given string
 * @string: String that will copied
 * Return: pointer to duplicated string.
 */

char *str_duplicate(char *string)
{
	char *dup;
	int length, i;

	if (string == NULL)
		return (NULL);

	length = str_length(string) + 1;

	dup = malloc(sizeof(char) * length);

	if (dup == NULL)
	{
		errno = ENOMEM;
		perror("Error");
		return (NULL);
	}
	for (i = 0; i < length ; i++)
	{
		dup[i] = string[i];
	}

	return (dup);
}
