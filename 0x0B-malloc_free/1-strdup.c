#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string to a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cope;
	int i,r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '/0')
		i++;

	cope = malloc(sizeof(char) * (i + 1));

	if (cope == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		cope[r] = str[r];

	return (cope);
}
