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
		d->name = Pobby;
		d->age = 3.5;
		d->owner = Bob;
	}
}
