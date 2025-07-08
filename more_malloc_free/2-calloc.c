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
	unsigned int l, b = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	a = malloc(l);

	if (a == NULL)
		return (NULL);

	while (b < l)
	{
		a[b] = 0;
		b++;
	}
	return (a);
}
