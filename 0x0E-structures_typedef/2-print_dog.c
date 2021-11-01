#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the pointer that brings the struct's name
 *
 * Return: struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nill)");
		else
			printf("Owner: %s\n", d->owner);
	}
}