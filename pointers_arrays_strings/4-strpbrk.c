#include <stdio.h>
#include "main.h"

/**
 * _strsbrk - search a string
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first found accepted character
*/

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}