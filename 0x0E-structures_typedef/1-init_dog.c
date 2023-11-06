#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variables
 * @d: struct of dog
 * @name: dog's name
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
