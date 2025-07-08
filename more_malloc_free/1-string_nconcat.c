#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concaternat two string
 * @s1: first string to add
 * @s2: seconde string to add
 * @n: number of bytes to add
 *
 * Return: c
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0, d = 0, l = 0;
	unsigned int b = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	if (b >= n)
		l = a + b;

	l = a + n;
	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
		return (NULL);

	b = 0;
	while (d < l)
	{
		if (d <= a)
			c[d] = s1[d];

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
