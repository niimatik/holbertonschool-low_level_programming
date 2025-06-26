#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate two strings with a certain number of bytes
 * @dest: destination strings
 * @src: source strings
 * @n: number of bytes tu use
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
