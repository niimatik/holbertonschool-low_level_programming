#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half of a string
 *@str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0, b, c;

	while (str[a] != '\0')
	{
		a++;
	}

	if ( a % 2 == 0)
		b = a / 2;
	else
		b = (a + 1) / 2;

	for (c = b; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
