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
		if (s[a] <= 122 && s[a] >= 97)
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
