#include "main.h"
#include <stdio.h>



void print_square(int size)
{
	int L, l;

	for (L = 1; L <= size; L++)
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
