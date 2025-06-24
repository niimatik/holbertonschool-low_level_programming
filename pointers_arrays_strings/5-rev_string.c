#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 *@s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c = 0, k;
	char *a, swp;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		swp = s[i];
		s[i] = *a;
		*a = swp;
		a--;
	}
}
