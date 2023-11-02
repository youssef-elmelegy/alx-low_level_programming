#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - sign a location with a givern size
 * @b: size
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
