#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square of '#' characters
 * @size: The size of the square
 *
 * Return: Nothing (void)
 */

void print_square(int size)
{
	int la, lo;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (la = 1; la <= size; la++)
	{
		for (lo = 1; lo <= size; lo++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
