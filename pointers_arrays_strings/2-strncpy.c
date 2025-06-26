#include <stdio.h>
#include "main.h"

/**
 *_strncpy - copy a strings
 * @dest: destination string
 * @src: source strings
 *@n: the copy limit
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
