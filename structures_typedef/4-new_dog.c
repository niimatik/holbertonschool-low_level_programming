#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - create a new dog
  * @name: is name
  * @age: is age
  * @owner: is owner
  *
  * Return: bill
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bill;
	int nl = 0, ol = 0;

	if (name != NULL && owner != NULL)
	{
		nl = _strlen(name) + 1;
		ol = _strlen(owner) + 1;
		bill = malloc(sizeof(dog_t));

		if (bill == NULL)
			return (NULL);

		bill->name = malloc(sizeof(char) * nl);

		if (bill->name == NULL)
		{
			free(bill);
			return (NULL);
		}

		bill->owner = malloc(sizeof(char) * ol);

		if (bill->owner == NULL)
		{
			free(bill->name);
			free(bill);
			return (NULL);
		}

		bill->name = _strcpy(bill->name, name);
		bill->owner = _strcpy(bill->owner, owner);
		bill->age = age;
	}

	return (bill);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
