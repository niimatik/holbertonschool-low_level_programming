#include "main.h"
#include <stdio.h>

/**
 * print_sign display sign of n
 *
 * Return: 1 if greater than 0 -1 if lower 0 if equal
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
