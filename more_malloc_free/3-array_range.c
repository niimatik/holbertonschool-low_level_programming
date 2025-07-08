#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creat an array of integer
 * @min: minimum value of integer
 * @max: maximun value of integer
 *
 * Return: b
 */

int *array_range(int min, int max)
{
	int a = 0, nbr = 0;
	int *b;

	if (min > max)
		return (NULL);

	nbr = max - min;
	b = malloc((sizeof(int) * nbr) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[a] = min;
		a++;
		min++;
	}
	return (b);
}
