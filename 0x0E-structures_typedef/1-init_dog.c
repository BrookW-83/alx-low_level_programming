#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable struct dog
 * @d: dog pointer to be intialized
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
