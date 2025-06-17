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
	char c, u;

	for (c = 'a', u = 'A'; c <= 'z' && u <= 'Z'; c++, u++)
	{
		putchar(c);
		putchar(u);
	}
	putchar('\n');
	return (0);
}
