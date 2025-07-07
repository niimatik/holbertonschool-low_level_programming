#include <stdlib.h>
#include <stdio.h>
#include "main.h"



int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **e;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int *) * height);

	if (e == NULL)
	{
		free(e);
		return(NULL);
	}

	for (a = 0; a < height; a++)
	{
		e[a] = malloc(sizeof(int *) * width);

		if (e[a] == NULL)
		{
			for (d = a; d >= 0; d--)
			{
				free(e[d]);
			}
			free(e);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			e[b][c] = 0;
		}
	}
	return(e);
}
