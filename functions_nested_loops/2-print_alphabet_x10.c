#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - imprime l'alphabet dix fois
 */

void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
