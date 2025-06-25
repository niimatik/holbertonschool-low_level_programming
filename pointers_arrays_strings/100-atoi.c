#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */

int _atoi(char *s)
{
	int a = 0;
	int sign = 1;
	int result = 0;

	while (s[a] != '\0')
	{
		a++;

		if (s[a] == ' ' || s[a] == '\t')
		{
			a++;
		}

		else if (s[a] == '-')
		{
			sign = -1;
			a++;
		}

		else if (s[a] == '+')
		{
			a++;
		}

		while (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 + (s[a] - '0');
			a++;
		}
	}
	return (sign * result);
}
