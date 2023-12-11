#include "main.h"

/**
 * _strcpy - Copy a string from source to destination.
 * @destination: Pointer to the destination buffer
 * @source: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
*/

char *_strcpy(char *destination, const char *source)
{
	char *originalDestination = destination;

	while ((*destination++ = *source++) != '\0')
	{
	}

	return (originalDestination);
}

/**
 * _strcat - Concatenate two strings.
 * @destination: Pointer to the destination buffer.
 * @source: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
*/

char *_strcat(char *destination, const char *source)
{
	char *originalDestination = destination;

	while (*destination != '\0')
	{
		destination++;
	}

	while ((*destination++ = *source++) != '\0')
	{
	}

	return (originalDestination);
}
