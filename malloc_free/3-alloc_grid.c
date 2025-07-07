#include <stdlib.h>
#include <stdio.h>
#include "main.h"



int **alloc_grid(int width, int height)
{
	int a, b, c;
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
