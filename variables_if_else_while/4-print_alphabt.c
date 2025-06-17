#include <stdio.h>

/**
 *main-Entry point of the program
 *
 *this program print the alphabet
 *
 *Return:Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
