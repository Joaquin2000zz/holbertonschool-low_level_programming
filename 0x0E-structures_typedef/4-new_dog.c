#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - make a pointer to a newly allocated space in memory
 * @str: a pointer that brings the string to print
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ar = 0;

	if (str == 0)
		return (0);

	while (str[i] != 0)
		i++;
	ar = malloc(i + 1 * sizeof(char));
	if (ar == 0)
		return (0);

	while (str[j] != 0)
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}
/**
 * new_dog - asign values of a structure in allocated space
 * @name: - dog's of the new dog
 * @age: - dog's age
 * @owner: - dog's best friend
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (0);

	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

		d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
