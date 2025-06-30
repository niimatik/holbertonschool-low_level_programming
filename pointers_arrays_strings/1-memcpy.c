#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: byte of memory area to copy
 * @src: source memory area
 * @dest: dest memory area
 *
 * return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a > n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
