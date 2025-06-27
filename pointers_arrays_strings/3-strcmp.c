#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: vlr
 */
int _strcmp(char *s1, char *s2)
{
	int vlr = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int lng;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		lng = a;
	}
	else
	{
		lng = b;
	}
	while (c <= lng)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			vlr = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (vlr);
}
