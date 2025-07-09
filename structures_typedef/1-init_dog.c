#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initiate a struct variable
 * @d: dog struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
