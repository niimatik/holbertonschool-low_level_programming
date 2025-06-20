#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - return the last digit of a number
 *@c: number to be treated
 *
 * Return: value of the last digit of a number
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (c < 0)
	{
		last = last * -1;
	}

	_putchar('0' + last);
	return (last);
}
