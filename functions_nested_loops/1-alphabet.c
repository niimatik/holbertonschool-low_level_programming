#include "main.h"
#include <stdio.h>

/**
 *main-Entry point of the program
 *
 *Return:Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
	return (0);
}
