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

/**
 * _strcmp - Compare two strings.
 * @str1: First string.
 * @str2: Second string.
 *
 * Return: 0 if strings are equal,
 * positive if str1 is greater, negative if str2 is greater.
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
