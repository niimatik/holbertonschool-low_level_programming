#include "main.h"
#include <stdio.h>

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  *
  * Return: empty
  */

void print_diagonal(int n)
{
	int num, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else

	for (num = 0; num < n; num++)
	{
		for (space = 0; space < num; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
