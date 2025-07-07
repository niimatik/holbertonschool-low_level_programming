#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: b
 */

char *_strdup(char *str)
{
	int a = 0, c = 0;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a])
	{
		a++;
	}
	b = malloc((sizeof(char) * a) + 1);

	if (b == NULL)
	{
		return (NULL);
	}
	while (c < a)
	{
		b[c] = str[c];
		c++;
	}

	b[c] = '\0';
	return (b);
}
