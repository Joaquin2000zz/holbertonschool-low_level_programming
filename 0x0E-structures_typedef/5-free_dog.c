#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs (?
 * @d: the pointer whith the values of the dog
 * Return: the doggo in freedom.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
