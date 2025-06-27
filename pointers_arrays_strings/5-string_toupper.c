#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase into uppercase
 * @s: string to modifie
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int a;

	while (s[a])
	{
		if (s[a] <= 'z' && s[a] >= 'a')
		{
			s[a] -= 32;
		}
		a++;
	}
	return (s);
}
