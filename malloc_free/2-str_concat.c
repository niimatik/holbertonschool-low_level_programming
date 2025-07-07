#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concaternat two string
 * @s1: string to concaternat first
 * @s2: string to concaternat in second
 *
 * Return: c
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, d = 0, l = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	l = a + b;
	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	b = 0;
	while (d < l)
	{
		if (d <= a)
		{
			c[d] = s1[d];
		}
		if (d >= a)
		{
			c[d] = s2[b];
			b++;
		}
		d++;
	}
	c[d] = '\0';
	return (c);
}
