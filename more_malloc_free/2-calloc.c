#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: the number of member in the array
 * @size: the size of the member
 *
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(sizeof(size) * nmemb);

	if (a == NULL)
		return (NULL);

	return (a);
}
