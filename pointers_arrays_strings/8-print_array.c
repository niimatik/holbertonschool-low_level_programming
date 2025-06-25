#include <stdio.h>
#include "main.h"

/**
 * print_array - print a certain number of element
 * @n: the number of element to print
 * @a: the element to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
