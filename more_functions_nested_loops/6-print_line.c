#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
