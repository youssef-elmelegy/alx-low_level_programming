#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int n = sizeof(int) * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	void *s = ptr;

	while (n--)
	{
		*ptr++ = char('0');
	}

	return (s);
}
