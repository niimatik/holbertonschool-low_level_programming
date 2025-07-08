#include <stdlib.h>
#include <stdio.h>
#include "main.h"



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
