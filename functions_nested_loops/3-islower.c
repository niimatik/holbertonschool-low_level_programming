#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
