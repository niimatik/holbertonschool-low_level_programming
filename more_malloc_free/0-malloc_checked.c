#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size of the memory to allocate
 *
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
