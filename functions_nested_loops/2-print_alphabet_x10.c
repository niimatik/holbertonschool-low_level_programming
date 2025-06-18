#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: This function uses _putchar to print each lowercase letter
 * of the English alphabet, from 'a' to 'z', followed by a newline.
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
