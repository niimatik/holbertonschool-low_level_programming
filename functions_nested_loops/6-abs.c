#include "main.h"
#include <stdio.h>

/**
 * _abs - compute the absolut value of a integer
 *@c: the number to be computed
 *
 * Return: Absolut value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
