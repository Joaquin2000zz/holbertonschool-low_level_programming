#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct maded to to get a list with information about doggos :)
 * @name: doggos's name
 * @age: doggo's age
 * @owner: doggo's best friend
 *
 * Description: all you need to know about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
