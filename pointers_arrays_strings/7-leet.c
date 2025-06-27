#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string
 * @s: string to encodes
 *
 * Return: s
 */

char *leet(char *s)
{
	int a = 0, b;
	char ltr[] = {'A', 'E', 'O', 'T', 'L'};
	int cfr[] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (ltr[b])
		{
			if (s[a] == ltr[b] || s[a] == (ltr[b] + 32))
			{
				s[a] = cfr[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
