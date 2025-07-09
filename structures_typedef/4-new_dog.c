#include <stdlib.h>
#include <stdio.h>
#include "dog.h"



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bill;
	int a = 0;

	bill = malloc(sizeof(dog_t));

	if (bill == NULL)
		return (NULL);


	while (a < name)
		a++;

	name = malloc(sizeof(char) * a);

	if (name == NULL)
		return (NULL);

	a = 0;
	while (a < owner)
		a++;

	owner = malloc(sizeof(char) * a);

	if (owner == NULL)
		return (NULL);

	bill->name = name;
	bill->age = age;
	bill->owner = owner;

	return (bill);
}