#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
