#include "main.h"
#include <stdio.h>



void reverse_array(int *a, int n)
{
	int b, c, *d, aux;

	d = a;

	for (b = 1; b < n; b++)
	{
		d++;
	}

	for (c = 0; c < b / 2; c++)
	{
		aux = a[c];
		a[c] = *d;
		*d = aux;
		d--;
	}
}
